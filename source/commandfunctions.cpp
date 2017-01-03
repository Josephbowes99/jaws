#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "../include/main.h"
#include "../include/math.h"
#include "../include/help.h"

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
	vector<string> args_usable = args;
	args_usable.erase(args_usable.begin());

	int len = args.size();
	if (len == 1) all_help();
	else if (args_usable[0] == "exit") exit_help();
	else if (args_usable[0] == "help") help_help();
	else if (args_usable[0] == "info") info_help();
	else if (args_usable[0] == "math") math_help();
	else if (args_usable[0] == "echo") echo_help();

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
	//If statements to check operator type, then changing to ints,

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
	int len = args.size();
	if (len == 1)
	{
		cout << "Please enter a string to be returned" << endl;
		return 0;
	}

	int count_wanted = 0;
	bool spaces_wanted = true;

	vector<string> args_usable = args;
	args_usable.erase(args_usable.begin());

	args.push_back(" ");

	if (args[1].length() > 0 && args[1][0] == '#') args_usable.erase(args_usable.begin());
	if (args[2].length() > 0 && args[2][0] == '#') args_usable.erase(args_usable.begin());

	if (args[1] == "#1" || args[2] == "#1") count_wanted = 1;
	else if (args[1] == "#2" || args[2] == "#2") count_wanted = 2;
	else if (args[1] == "#3" || args[2] == "#3") count_wanted = 3;
	else if (args[1] == "#4" || args[2] == "#4") count_wanted = 4;
	else if (args[1] == "#5" || args[2] == "#5") count_wanted = 5;
	if (args[1] == "#s" || args[2] == "#s") spaces_wanted = false;

	echo_out(args_usable, count_wanted, spaces_wanted);

	return 0;
}
