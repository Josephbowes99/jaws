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

//TODO
//fix this mess, needs to call a function or something?
//also error when entered: echo #s #4 hello jasdlfkf "uadoiufh djsf  iufijef" iahsdf o ewe

int echo_func (vector<string>args)
{
	if (args[1] == "#help")
	{
		cout << "Echo returns the value you entered" << endl;
		cout << "#1    - Returns the first word entered" << endl;
		cout << "#2    - Returns the first and second word entered" << endl;
		cout << "#...  - This pattern is continued up to 5 words" << endl;
		cout << "#s    - Returns the string without spaces" << endl;
	}

	else if (args[1] == "#1")
	{
		for (int i = 2; i < 3; i++)
		{
			cout << args[i] << " ";
		}
		cout << endl;
	}

	else if (args[1] == "#2")
	{
		for (int i = 2; i < 4; i++)
		{
			cout << args[i] << " ";
		}
		cout << endl;
	}

	else if (args[1] == "#3")
	{
		for (int i = 2; i < 5; i++)
		{
			cout << args[i] << " ";
		}
		cout << endl;
	}

	else if (args[1] == "#4")
	{
		for (int i = 2; i < 6; i++)
		{
			cout << args[i] << " ";
		}
		cout << endl;
	}

	else if (args[1] == "#5")
	{
		for (int i = 2; i < 7; i++)
		{
			cout << args[i] << " ";
		}
		cout << endl;
	}

	else if (args[1] == "#s")
	{
		if (args[2] == "#1")
		{
			for (int i = 3; i < 4; i++)
			{
				cout << args[i];
			}
		}

		else if (args[2] == "#2")
		{
			for (int i = 3; i < 5; i++)
			{
				cout << args[i];
			}
		}

		else if (args[2] == "#3")
		{
			for (int i = 3; i < 6; i++)
			{
				cout << args[i];
			}
		}

		else if (args[2] == "#4")
		{
			for (int i = 3; i < 7; i++)
			{
				cout << args[i];
			}
		}

		else if (args[2] == "#5")
		{
			for (int i = 3; i < 8; i++)
			{
				cout << args[i];
			}
		}

		else
		{
			for (int i = 2; i < args.size(); i++)
			{
				cout << args[i];
			}
		}
		cout << endl;
	}

	else
	{
		//for (int i = 1; i < args.size(); i++)
		//{
			//cout << args[i] << " ";
		//}
		cout << endl;
	}

	return 0;
}
