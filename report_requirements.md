# Report Requirements

a) the project description (in your words)

b) any other comments and conclusions that you may prefer to include. The report should be roughly about two printed pages.

# Feed back on last report

The report is supposed to have the transcripts for every output with your source code.
And explain the benchmarks, algorithms, the idea and functions of you code, and the conclusion like the way you write a dissertation. 

-----

                            ## Project Description
The main problem of which this project is trying to fix is constructing a cross-reference index for a given text file. this cross-reference index is commonly used in compilers and databases.

We can do this by using a data struture called a binary tree. A binary tree is a data structure in which each node has at most two children (which are referred as left child and right child). This data stuture is use to store a list of words passed in by the user from a file and then sorts the words alphabetically in the file by use of a binary search.and stores line number of occurrence. Binary Search (also known as half-interval search) is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target vaule to the middle element of the array;  if they are unequal, the half in which the target cannot lie is eliminated and the search continues on the remaining half until it is successful. If the search ends with the remaining half being empty, the target is not in the array.

An example of using this cross-reference would be using the following three words:

"abracadabra","hocuspocus", and "watchamaycalli"

 "abracadabra"  - would be the root of the tree

"hocuspocus" - would be the left child of the root

"watchamaycalli" - would be the right child of the root

---
                            ## Source Code
included source files and header files:

lexicographic/lexicographic.cpp
lexicographic/lexicographic.h

node/node.h 

main.cpp

input_files/another_text_input.txt
input_files/text_input.txt

readme.md

these to files are just formating strings and I found it on stackoverflow
string_formater/string_formater.cpp
string_formater/string_formater.h


                            
---
                           ## Sample Output

lexicographic-tree|master ✗⇒ cat input_files/another_text_input.txt  | ./TheWordTree.out # this is what I entered into my terminal
WELCOME
If you would like to exit type: `#`

 civilizati       1

    destiny       3

         is       2    3

  knowledge       2    3

         of       1

        our       3

    science       1    2
---
                             ## Comments

                                    The Basic Approach
I chose to write my program in C++ because it is one of the lanuages that I am most comfortable programming in. I have been using it since high school. C++ also offers advantage of maxium control of what your programm does and how it mangeges memory. My basic approach was to design the program so it could take in standard input. that way it could read in files as well as input from the user. most of text processing happens in the main file. 

the main file checks if first a '#' has been enter the program wil halt, if not the program will continue process the current line of text. Then passed to a paser function, that will normalize the text. breaking the sentence into individual words, making the text all lower case, checking if each word starts with a letter, and removing punctuation marks. Each word is then sent to be sort in the tree alphabetically. Each word in the tree is stored in a node that has a vector which stores on what lines the words shows up, and a left & right child. 

when we insert a node, my algorthim will search first if the node already exist in the tree, if not it will compare each word in the tree  with the new node and on what child it belongs.

                                    Binary Search
in my research it wasn't that hard to find great resources on how to do binary search on a tree. It seems to be easir then doing a binary search on a array. CS50 on youtube was of good use to me in the process of writing the Binary Search algorthim because before this progarm I have never tried to implment this search algorthim. it did seem quite scary at first but once I watched a few videos it wasn't that bad. 

                                    Runtime Complexity
Their only one main algorthim in this programm, that is a binary search of the tree when inserting new elements which at worest case is O(logn) and print each element would take O(n). 
                                    

---
                                    
