#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "../include/main.h"

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

	return 0;
}
