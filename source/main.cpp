// JAWS, Joseph's Almost Working Shell
// Joseph Bowes
// 09/12/16

#include "../include/main.h"
#include "../include/commandfunctions.h"

#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::map;

const string short_name = "JAWS";
const string long_name = "Joseph's Actually Working Shell";
const string version = "1.0";
const string line_start = "> ";
const string not_found = "Command not found";

bool exit = false;

map<string, int (*)(vector<string>)> commands;
map<string, string> help_strings;

void title()
{
	cout << short_name << endl;
}

void commands_initialise()
{
	commands["exit"] = &exit_func;
	commands["help"] = &help_func;
	commands["info"] = &info_func;
}

void help_initalise()
{
	help_strings["exit"] = "Exits JAWS";
	help_strings["help"] = "Outputs a list of commands";
	help_strings["info"] = "Outputs all the info about JAWS";
}

string input()
{
	cout << line_start;
	string in;
	getline(cin, in);
	return in;
}

void main_loop()
{
	string in;
	vector<string> empty;

	while (!exit)
	{
		in = input();

		if(in != "")
		{
			if (commands.find(in) != commands.end())
			{
				commands[in](empty);
			}
			else cout << not_found << endl;
		}
	}
}

int main()
{
	commands_initialise();
	help_initalise();

	title();
	main_loop();

	return 0;
}
