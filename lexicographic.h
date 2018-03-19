//
// Honor Pledge:
//
// I pledge that I have neither given nor
//  received any help on this assignment.
//
//chajmart

//

#ifndef LEXICOGRAPHIC_TREE_LEXICOGRAPHIC_H
#define LEXICOGRAPHIC_TREE_LEXICOGRAPHIC_H


#include "node.h"

class lexicographic {
public:
    lexicographic();
    virtual ~lexicographic();

    void insertNode(std::string wordInserted, int lineNumber);
    void insertNode(node *&pNode, std::string basic_string, int i);

    node * searchNodes(std::string word, node * searchNode);
    void print ();

private:
    node * _head;
    size_t _size;
    void print(node * head);

};


#endif //LEXICOGRAPHIC_TREE_LEXICOGRAPHIC_H
