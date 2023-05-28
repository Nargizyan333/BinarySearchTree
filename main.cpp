#include <iostream>
#include "BinaryNode.h"
#include "BinarySearchTree.h"

int main() {
    const int rootNum = 4;
    BinarySearchTree<int>* tree = new BinarySearchTree<int>(rootNum);
    tree->add(2);
    tree->add(6);
    tree->add(1);
    tree->add(3);
    tree->remove(4);
    delete tree;
    return 0;
}

#include "BinaryNode.cpp"
#include "BinarySearchTree.cpp"

// clang++ ./main.cpp -std=c++20 -O3 -o main