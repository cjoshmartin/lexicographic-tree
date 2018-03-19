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
#include "string_formater.h"

lexicographic::lexicographic(): _size(0), _head(nullptr) {}

lexicographic::~lexicographic() {

}

size_t lexicographic::size() {
    return this->_size;
}

void lexicographic::insertNode(std::string wordInserted, int lineNumber) {

    if(this->_head == nullptr)
    {
        node * newHead = new node;

        newHead->lineNumbers.push_back(lineNumber);
        newHead->lexicon = wordInserted;

        newHead->right = nullptr;
        newHead->left = nullptr;

        this->_size++;

        this->_head = newHead;
    }
    else
    {

     node * searching = searchNodes(wordInserted,this->_head);

        if(searching!=nullptr)
        {
            searching->lineNumbers.push_back(lineNumber);
        }
        else
        {
            insertNode(this->_head,wordInserted,lineNumber);
            this->_size++;
        }
    }
}

void lexicographic::insertNode(node *&pNode, std::string basic_string, int i) {

    if(pNode == nullptr)
    {
        node * newHead = new node;
        newHead->lineNumbers.push_back(i);
        newHead->lexicon = basic_string;

        newHead->right = nullptr;
        newHead->left = nullptr;
        pNode = newHead;
    }
    else
        insertNode(pNode->lexicon <= basic_string ? pNode->right : pNode->left, basic_string, i);
}

node *lexicographic::searchNodes(std::string word, node *searchNode) {

    if(searchNode == nullptr)
    return nullptr;

    if (searchNode->lexicon == word)
        return searchNode;

    node * __left = searchNodes(word,searchNode->left);
    node * __right = searchNodes(word, searchNode->right);

    if (__left != nullptr)
        return __left;

    if (__right != nullptr)
        return __right;

    return nullptr;
}

void lexicographic::print(node * head) {
    if ( head == nullptr)
        return;

    print(head->left);

    std::vector<int>::iterator it;  // declare an iterator to a vector of strings
    printf("\n%11s   ",head->lexicon.c_str());
    for(it = head->lineNumbers.begin(); it != head->lineNumbers.end(); it++)
        std::cout << string_formater::formater("%5d",*it);

    std::cout << "\n";

    print(head->right);
}

void lexicographic::print() {
    if (_size < 1)
        throw std::overflow_error("tree is empty");

    print(this->_head);
}

