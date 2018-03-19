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

int lexicographic::size() {
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
            this->_head->lineNumbers.push_back(lineNumber);
        }
        else
        {
            insert(this->_head,wordInserted,lineNumber);
            this->_size++;
        }
    }
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
