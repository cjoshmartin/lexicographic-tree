//
// Honor Pledge:
//
// I pledge that I have neither given nor
//  received any help on this assignment.
//
//chajmart

//

#include "lexicographic.h"
#include <stdexcept>
#include <iostream>
#include <fstream>
#include "../string_formater/string_formater.h"

lexicographic::lexicographic(): _size(0), _head(nullptr), _output("") {} // default constructor for this clas

lexicographic::~lexicographic() {

}


void lexicographic::insertNode(std::string wordInserted, int lineNumber) {

    if(this->_head == nullptr) // checks if the tree is empty
    {
        node * newHead = new node; // creates a new node

        newHead->lineNumbers.push_back(lineNumber); // adds the line number to the new word
        newHead->lexicon = wordInserted; // sets the word to the node
//the tree is only one node, so we'll just make the left and right node null
        newHead->right = nullptr;
        newHead->left = nullptr;

        // size of the tree has increased
        this->_size++;

        // setting the head to the top of the tree
        this->_head = newHead;
    }
    else
    {
        // else there are already nodes in the tree

        // so lets search to see where this new node belongs
     node * searching = searchNodes(wordInserted,this->_head);

        if(searching!=nullptr) // if we found one, that already exist in the tree. lets append a new line number
        {
            searching->lineNumbers.push_back(lineNumber);
        }
        else
        { // else search where it fits in the tree
            insertNode(this->_head,wordInserted,lineNumber);
            this->_size++; // new node added
        }
    }
}

void lexicographic::insertNode(node *&pNode, std::string basic_string, int i) {

    if(pNode == nullptr) // this if statemant is the same as the one above
    {
        node * newHead = new node;
        newHead->lineNumbers.push_back(i);
        newHead->lexicon = basic_string;

        newHead->right = nullptr;
        newHead->left = nullptr;
        pNode = newHead;
    }
    else
        // how wee find where the node belongs
        insertNode(pNode->lexicon <= basic_string ? pNode->right : pNode->left, basic_string, i);
}

node *lexicographic::searchNodes(std::string word, node *searchNode) {

    if(searchNode == nullptr)
    return nullptr;

    if (searchNode->lexicon == word) // checks if the node already exist in the tree
        return searchNode;

    node * __left = searchNodes(word,searchNode->left); // searching the left side of the tree
    node * __right = searchNodes(word, searchNode->right); // searching the right side of the tree

    if (__left != nullptr)// checks if the node already exist in the tree
        return __left;

    if (__right != nullptr)// checks if the node already exist in the tree
        return __right;

    return nullptr; // node couldn't find one like it
}

void lexicographic::buildText(node *head) {
    if ( head == nullptr)
        return;

    buildText(head->left); // moves the farest left it can first

    std::vector<int>::iterator it;  // declare an iterator to a vector of int
    _output += string_formater::formater("\n%11s   ",head->lexicon.c_str()); // prints the word
    for(it = head->lineNumbers.begin(); it != head->lineNumbers.end(); it++)
        _output += string_formater::formater("%5d",*it); // prints line number of the word

    _output +="\n";

    buildText(head->right); // then moves farest right it can
}

void lexicographic::buildText() {
    if (_size < 1) // checks if there is anything to buildText
        throw std::overflow_error("tree is empty");

    buildText(this->_head); // calls the recessive version of buildText
}

void lexicographic::outputToScreen() {

    std::cout << _output;
}

void lexicographic::outputToFile(std::string file) {
    std::ofstream myfile;
    myfile.open (file);
    myfile << _output;
    myfile.close();

}

