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
    std::string lexicon;
    std::vector<int> lineNumbers;
    node *left,*right;
};
#endif //LEXICOGRAPHIC_TREE_NODE_H
