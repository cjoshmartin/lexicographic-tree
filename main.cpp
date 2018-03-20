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
#include <sstream>
#include "lexicographic/lexicographic.h"

void paser(std::string, int, lexicographic *);

int main(void)
{
    std::string inputStr;
    int lineNumber= 1;
    bool quit = false; // hold if user wants to quit
    lexicographic * theTree = new lexicographic();

    std::cout<< "WELCOME\nIf you would like to exit type: `#`\n"; // always be nice to your users and say hello

    while (!quit)
    {
        getline(std::cin,inputStr); // loads a line of text into the buffer

        if(inputStr.compare("#") == 0 || inputStr.compare("##") == 0 )
            quit = true; // this is how the program exists

        else if (inputStr.compare(" ") == 0)
        {
            // do nothing if you receive a blank space
        }

        else
            paser(inputStr,lineNumber++,theTree); // sends the string off to be pasered
    }

    theTree->buildText();
    theTree->outputToScreen();
    theTree->outputToFile("OUTPUTFILE.TXT");

    return 0;
}

void paser(std::string inputStr, int lineNumber,lexicographic * theTree)
{
    std::istringstream input(inputStr); // brakes the input string into words by the spaces
    std::string e; // where each word is stored

    while (!input.eof()) {
        size_t split = 10; // setting a default length for each word
        input >> e; // next word in the input string

        // checking for punctuation marks other newline and spaces because istringstream will handle that for me
        // https://simple.wikipedia.org/wiki/Punctuation

        if (e.find(",") != std::string::npos) //finds ','
            split = e.find(",");
        else if (e.find("...") != std::string::npos) // finds '.'
            split = e.find("...");
        else if (e.find(".") != std::string::npos) // finds '.'
            split = e.find(".");
        else if (e.find("!") != std::string::npos) // finds  '!'
            split = e.find("!");
        else if (e.find("?") != std::string::npos) // finds '?'
            split = e.find("?");
        else if (e.find(":") != std::string::npos) // finds ':'
            split = e.find(":");
        else if (e.find(";") != std::string::npos) // finds ';'
            split = e.find(";");
        else if (e.find("---") != std::string::npos) // finds '---'
            split = e.find("---");
        else if (e.find("--") != std::string::npos) // finds '--'
            split = e.find("--");
        else if (e.find("-") != std::string::npos) // finds '-'
            split = e.find("-");

        // checks if the spilter is bigger then 10, this will reduce it into range of [0,10)
        if (split > 10)
            split = 10;

        if (isalpha(e.c_str()[0])) { // checks if the first letter starts with [a-z]
            std::transform(e.begin(), e.end(), e.begin(), ::tolower); // normalizes the text to lowercase
            theTree->insertNode(e.substr(0, split), lineNumber); // sends the nodes off to be created
        }
    }
}