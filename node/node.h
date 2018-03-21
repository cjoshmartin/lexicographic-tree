//
// Honor Pledge:
//
// I pledge that I have neither given nor
//  received any help on this assignment.
//
//chajmart

//

#ifndef LEXICOGRAPHIC_TREE_NODE_H
#define LEXICOGRAPHIC_TREE_NODE_H

#include <string>
#include <vector>

struct node{
    std::string lexicon; // where each word is stored
    std::vector<int> lineNumbers; // where each word appears in the text
    node *left,*right; // the next words in the list
};
#endif //LEXICOGRAPHIC_TREE_NODE_H
