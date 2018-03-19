//
// Honor Pledge:
//
// I pledge that I have neither given nor
//  received any help on this assignment.
//
//chajmart

//

#include "lexicographic.h"

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

