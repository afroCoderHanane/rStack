#include"Stack.h"
template <class T>
Stack<T>::Stack(): length(0), head(NULL){}
template <class T>
Stack<T>::Stack(const Stack & other)
{
  if(other.head==NULL)
  {
   head == NULL;
    //tail =NULL;
    length=0;
  }
}
template <class T>
bool Stack<T>:: isEmpty()
{
  return (head==NULL);
}
template <class T>
void Stack<T>:: empty()
{
  Node<T>*p;
  
  while(p!= NULL)
  {
    p= head;
    head = head->next;
    delete p;
  }
  tail = NULL;
}
template <class T>
void Stack<T>:: Push(T item)
{
  if(head==NULL)
  {
    Node<T>* p = new Node<T>;
    p->key= item;
    p= head;
    p->next= NULL;
  }
  else
  {
   Node<T>* p = new Node<T>;
   p->key= item;
   p->next = head;
   head = p;
  }
 length++;

}
template <class T>
void Stack<T>:: Pop()
{
  if(head==NULL)
  {
    cout <<"Empty Stack"<<endl;
  }
  else
  {
   Node<T>* p;
   p= head;
   head = head->next ;
   delete head;
  }
 length--;
}
template <class