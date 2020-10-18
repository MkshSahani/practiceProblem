#ifndef BINARYTREE_H 
#define BINARYTREE_H 
#include <iostream> 
#include <cstdlib> 
#include "Queue.h"

using namespace std; 

template <typename T> 
class BinaryTreeNode 
{
    public:
        BinaryTreeNode();
        BinaryTreeNode(T data); 
        T getData() const;
        BinaryTreeNode<T> *getLeft() const;
        BinaryTreeNode<T> *getRight() const;
        bool setData(T data);
        bool setLeft(BinaryTreeNode<T> *node);
        bool setRight(BinaryTreeNode<T> *node); 

    private:
        T data; 
        BinaryTreeNode<T> *left; 
        BinaryTreeNode<T> *right; 

}; 

template <typename T> 
BinaryTreeNode<T>::BinaryTreeNode()
{
    this->left = NULL;
    this->right = NULL; 
}

template <typename T> 
BinaryTreeNode<T>::BinaryTreeNode(T data)
{
    this->data = data;
    this->left = NULL;
    this->right = NULL; 
}

template <typename T> 
T BinaryTreeNode<T>::getData() const 
{
    return this->data; 
}

template <typename T> 
BinaryTreeNode<T> *BinaryTreeNode<T>::getLeft() const 
{
    return this->left; 
}

template <typename T> 
BinaryTreeNode<T>* BinaryTreeNode<T>::getRight() const 
{
    return this->right; 
}

template <typename T> 
bool BinaryTreeNode<T>::setData(T data)
{
    this->data = data; 
}

template <typename T>
bool BinaryTreeNode<T>::setLeft(BinaryTreeNode<T> *node)
{
    this->left = node; 
    return true; 
}

template <typename T> 
bool BinaryTreeNode<T>::setRight(BinaryTreeNode<T> *node)
{
    this->right = node;
    return true; 
}





#endif 