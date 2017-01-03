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

void help_initalise()
{
	help_strings["exit"] = "Exits JAWS";
	help_strings["help"] = "Outputs a list of commands";
	help_strings["info"] = "Outputs all the info about JAWS";
	help_strings["math"] = "Does very basic calculations";
	help_strings["echo"] = "Returns the entered string";
}

void all_help()
{
	cout << "Command - Usage" << endl << endl;
	for(auto iterator = help_strings.begin(); iterator != help_strings.end(); iterator++)
	{
		cout << iterator->first << " - " << iterator->second << endl;
	}

	cout << endl << "For more detailed help, enter help then the command" << endl;
}

void exit_help()
{
	cout << help_strings["exit"] << endl;
}

void help_help()
{
	cout << "Help is your last hope, the only way to survive in the JAWS world!" << endl;
}

void info_help()
{
	cout << help_strings["info"] << endl;
}

void math_help()
{
	cout << help_strings["math"] << endl;
	cout << "The math function carries out basic functions" << endl;
	cout << "The 4 current operators are +, -, * and /" << endl;
	cout << "Formatted: first number operator second number" << endl;
}

void echo_help()
{
	cout << help_strings["echo"] << endl;
	cout << "#1    - Returns only the first word" << endl;
	cout << "#2    - Returns the second and all previous words" << endl;
	cout << "#...  - This continues up to 5" << endl;
	cout << "#s    - Removes spaces from the returned string" << endl;
}
