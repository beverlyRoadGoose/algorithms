//
// Created by Oluwatobi Adeyinka on 2019-02-13.
//

#ifndef ALGORITHMS_NODE_H
#define ALGORITHMS_NODE_H

#include <iostream>

template <typename T>
class Node {
private:
  T data;
  Node<T> * nextNode;
public:
  Node(T data);
  Node(T data, Node<T> * nextNode);
  ~Node();
  T getData();
  void setData(T data);
  Node<T> * getNextNode();
};


#endif //ALGORITHMS_NODE_H
