#include <iostream>
#include"Stack.h"
#include"Stack.cpp"
using namespace std;

int main() {
  //std::cout << "Hello World!\n";
  Stack<int>l;
  l.Push(5);
  l.Push(50);
  l.Push(4);
  Stack <char>c;
  c.Push('a');
  c.Push('b');
  //char b = b.Top();
  c.print();
 // l.Pop();
 // Stack<int>::Top();
 // Stack<int>::Top();
  
  cout << endl<< "Top is "<< l.Top() <<endl;
  //l.empty();
  l.print();
  }