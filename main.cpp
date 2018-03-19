//
// Honor Pledge:
//
// I pledge that I have neither given nor
//  received any help on this assignment.
//
//chajmart

//

/*
civilization of science.
science is knowledge.
knowledge is our destiny.
#

 */

#include <iostream>
#include <stdio.h>
#include <string>

#include <sstream>
#include <algorithm>

void paser(std::string, int);

int main(void)
{
    std::string inputStr;
    int lineNumber= 1;
    bool quit = false; // hold if user wants to quit

    std::cout<< "WELCOME\nIf you would like to exit type: `#`\n"; // always be nice to your users and say hello

    while (!quit)
    {
        getline(std::cin,inputStr);

        if(inputStr.compare("#") == 0 || inputStr.compare("##") == 0 )
            quit = true;
        else if (inputStr.compare(" ") == 0)
        {
            // do nothing if you receive a blank space
        }
        else
            paser(inputStr,lineNumber++);
    }

    return 0;
}

void paser(std::string inputStr, int lineNumber)
{
    std::istringstream input(inputStr);
    std::string e;

    while (!input.eof()) {
        size_t split = 10;
        input >> e;

        // checking for punctuation marks other newline and spaces because istringstream will handle that for me
        // https://simple.wikipedia.org/wiki/Punctuation

        if ( e.find(",") != std::string::npos) //finds ','
            split = e.find(",");
        else if (e.find("...") != std::string::npos) // finds '.'
            split = e.find("...");
        else if (e.find(".") != std::string::npos) // finds '.'
             split = e.find(".");
        else if (e.find("!") != std::string::npos)
            split = e.find("!");
        else if (e.find("?") != std::string::npos)
            split = e.find("?");
        else if (e.find(":") != std::string::npos)
            split = e.find(":");
        else if (e.find(";") != std::string::npos)
            split = e.find(";");
        else if (e.find("---") != std::string::npos)
            split = e.find("---");
        else if (e.find("--") != std::string::npos)
            split = e.find("--");
        else if (e.find("-") != std::string::npos)
            split = e.find("-");

        // checks if the spilter is bigger then 10
        if( split > 10)
            split = 10;

        std::transform(e.begin(), e.end(), e.begin(), ::tolower);
        std::cout << "\n" << e.substr(0,split) << " "<< lineNumber <<  "\n";
    }
}