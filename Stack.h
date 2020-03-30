#pragma once 
#include<iostream>
using namespace std;

template<class T>
struct Node
{
  Node* next;
  T key;
};

template <class T>
class Stack   // LIFO
{
  private:
       Node<T> * head;
       Node<T> * top;
       int length;
  protected:
       void copy(const Stack & other);
  public:
       Stack ();
       ~Stack();
       Stack (const Stack & other);
       void Pop();
       void Push(T item);
       bool isEmpty();
       T Top();
       int count();
       void operator =(const Stack & other);
       void empty();
       void print();
};