#pragma once
#include<iostream>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;
class Operation
{
  private:
         Stack<int>operands;
         Stack<char>operators;
         string input;
         int preference;
  protected:
         char extract_char();
         int extract_first_digit();
         int extract_number();
  public:
         Operation(string );
         int preferenceSetter(char inputchar);
         void pushCalculate(int a1, int a2, char o );
         int s_calculation(int inputInt1,int inputInt2, char inputchar );
         void solve();  
         int extract_all_num();     
};
