#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "../include/main.h"
#include "../include/math.h"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::map;
using std::vector;

int exit_func(vector<string> args)
{
	exit = true;
	return 0;
}

int help_func(vector<string> args)
{
	cout << "Command - Usage" << endl << endl;
	for(auto iterator = help_strings.begin(); iterator != help_strings.end(); iterator++)
	{
		cout << iterator->first << " - " << iterator->second << endl;
	}

	return 0;
}

int info_func(vector<string> args)
{
	cout << short_name << endl;
	cout << long_name << endl;
	cout << "V" << version << endl;
	cout << "The code for JAWS can be found at www.github.com/josephbowes99/jaws" << endl;

	return 0;
}

int math_func(vector<string> args)
{
	if (args[1] == "#help")
	{
		cout << "The math function carrys out basic functions" << endl;
		cout << "The 4 current operators are +, -, * and /" << endl;
		cout << "Formatted: first number operator second number" << endl;
	}

	//int num_one = stoi(args[1]);
	//int num_two = stoi(args[3]);
	//int awnser = num_one + num_two;
	//cout << awnser << endl;


	//float num_one = (args[1], NULL);
	//float num_two = (args[3], NULL);

	/*
	if (args[2] == "+")
	{
		//add_math(num_one, num_two);
	}
	else if (args[2] == "-")
	{

	}
	*/

	return 0;
}

//Echo functions

int echo_out(vector<string> strings, int count, bool spaces)
{
	int strings_count = strings.size();

	if (count > strings_count)
	{
		cout << "Please enter more or as many words, as you have put in your arguments" << endl;
		return 1;
	}

	if (count == 0) count = strings.size();

	for (int i = 0; i < count; i++)
	{
		if (spaces) cout << strings[i] << " ";
		else cout << strings[i];
	}
	cout << endl;
	return 0;
}

int echo_func(vector<string> args)
{
	int count_wanted = 0;
	bool spaces_wanted = true;

	vector<string> args_usable = args;
	args_usable.erase(args_usable.begin());

	if (args[1].length() > 0 && args[1][0] == '#') args_usable.erase(args_usable.begin());
	if (args[2].length() > 0 && args[2][0] == '#') args_usable.erase(args_usable.begin());
	args.push_back(" ");

	if (args[1] == "#1" || args[2] == "#1") count_wanted = 1;
	else if (args[1] == "#2" || args[2] == "#2") count_wanted = 2;
	else if (args[1] == "#3" || args[2] == "#3") count_wanted = 3;
	else if (args[1] == "#4" || args[2] == "#4") count_wanted = 4;
	else if (args[1] == "#5" || args[2] == "#5") count_wanted = 5;
	if (args[1] == "#s" || args[2] == "#s") spaces_wanted = false;

	echo_out(args_usable, count_wanted, spaces_wanted);

	return 0;
}
