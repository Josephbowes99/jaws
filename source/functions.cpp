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

//string splitting functions

vector<string> splitter_old(string in)
{
	vector<string> words;
	string current_word;

	int i = 0;

	for(char c : in)
	{
	    if (c != ' ')
	    {
	    	current_word += c;
	    }
	    else
	    {
	    	words[i] = current_word;
	    	i++;
	    	current_word = "";
	    }
	}

	return words;
}


void splitter(vector<string> &words, string &in)
{
    string current_word;

    for(char c : in)
    {
        if (c != ' ')
        {
            current_word += c;
        }
        else
        {
            words.push_back(current_word);
            current_word = "";
        }
    }

    if(current_word.length() > 0)
    {
        words.push_back(current_word);
    }
}
