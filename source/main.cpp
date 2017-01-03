// JAWS, Joseph's Almost Working Shell
// Joseph Bowes
// 09/12/16

#include "../include/main.h"
#include "../include/commandfunctions.h"
#include "../include/math.h"
#include "../include/functions.h"
#include "../include/help.h"

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
	commands["math"] = &math_func;
	commands["echo"] = &echo_func;
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
	string command_word;
	vector<string> input_split;

	while (!exit)
	{
		in = input();

		if(in != "")
		{
			splitter(input_split, in);
			command_word = input_split[0];

			if (commands.find(command_word) != commands.end())
			{
				commands[command_word](input_split);
			}
			else cout << not_found << endl;
		}
		else cout << not_found << endl;

		input_split.clear();
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
