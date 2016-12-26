#ifndef __COMMANDFUNCTIONS_
#define __COMMANDFUNCTIONS_

#include <string>
#include <vector>

using std::string;
using std::vector;

int exit_func(vector<string> args);
int help_func(vector<string> args);
int info_func(vector<string> args);
int math_func(vector<string> args);
int echo_func(vector<string> args);

#endif
