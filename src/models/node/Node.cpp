//
// Created by Oluwatobi Adeyinka on 2019-02-13.
//

#include "Node.h"

template <typename T>
Node<T>::Node(T data) {
  this->data = data;
  this->nextNode = NULL;
}

template <typename T>
Node<T>::Node(T data, Node<T> * nextNode) {
  this->data = data;
  this->nextNode = nextNode;
}

template <typename T>
Node<T>::~Node() {}

template <typename T>
T Node<T>::getData() {
  return this->data;
}

template <typename T>
void Node<T>::setData(T data) {
  this->data = data;
}

template <typename T>
Node<T> * Node<T>::getNextNode() {
  return this->nextNode;
}