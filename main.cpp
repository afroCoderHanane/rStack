#include <iostream>
#include"Stack.h"
#include"Stack.cpp"
using namespace std;

int main() {
  std::cout << "Hello World!\n";
  Stack<int>l;
  l.Push(5);
  l.Push(50);
  l.Push(4);
  l.Pop();
  l.print();
  }