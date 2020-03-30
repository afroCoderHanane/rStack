#include "Operation.h"

Operation::Operation(string m)
{
  input = m;
  preference =0;
}
int Operation:: preferenceSetter(char inputchar)
{
  if(inputchar=='+'||inputchar=='-')
   return(preference = 1);
  else if(inputchar=='*'||inputchar=='/')
   return(preference = 2);
  else
   return(preference = 3);
}
void Operation::pushCalculate(int a1, int a2, char o1 )
{
  int res;
  a1 = operands.Top();
  operands.Pop();
  a2 = operands.Top();
  operands.Pop();
  o1 = operators.Top();
  operators.Top();
  res = s_calculation(a1,a2,o1);
  operands.Push(res);
}
int Operation::s_calculation(int a1, int a2, char o1)
{ 
  int res;
  if (o1 == '+')
     res = a1+a2;
  else if(o1 =='-')
     res = a1- a2;
  else if(o1=='*')
     res = a1*a2;
  else if(o1 == '/')
     if(a2 !=0)
      res = a1/a2;
     else
      cout<<"invalid operation"<<endl;
  else
     {
       cout<<"Operation not available"<<endl;
     }

  return res;
}
char Operation::extract_char()
{
    // throw away leading white space
    while( isspace( cin.peek() ) ) cin.ignore(1) ;
    // retrieve the first non-whitespace char
    int c = cin.peek() ;
    cin.ignore(1) ; // and remove it from the input buffer
    return char(c) ;
}
 inline int Operation:: extract_first_digit()
{
    // throw away leading non-digit characters
   while( !isdigit( cin.peek() ) ) cin.ignore(1) ;
    // get the digit
    int n = cin.peek() - '0' ;
    cin.ignore(1) ; // and remove the numeral from the input buffer
    return n ;
}
int Operation::extract_number()
{
    int number = extract_first_digit() ;
    while( isdigit( cin.peek() ) ) // extract trailing digits
    {
        number *= 10 ;
        number += cin.peek()-'0' ;
        cin.ignore(1) ;
    }
    return number ;
}

int Operation:: extract_all_num()
{
    char c;
    int num;
    while( !isdigit( cin.peek() ) ) 
    {
      cin.get(c) ;
    }

    if(c=='-')
      num = (extract_number())*(-1);
    else
      num = extract_number();
     
     return num;
}