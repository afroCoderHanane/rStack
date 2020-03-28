#include"Stack.h"
template <class T>
Stack<T>::Stack(): length(0), head(NULL){}
template <class T>
Stack<T>::Stack(const Stack & other)
{
  copy(other);
}
template <class T>
void  Stack<T>::operator=(const Stack & other)
{ 
  empty();
  copy(other);
}
template <class T>
Stack<T>::~Stack()
{
  empty();
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
  
  while(head!= NULL)
  {
     p= head;
    head = head->next;
    delete p;

  }
  length =0;
 // tail = NULL;
}

template <class T>
void Stack<T>:: Push(T item)
{
  Node<T>* p = new Node<T>;
  if(head==NULL)
  {
    
    p->key = item;
    p->next= NULL;
    head = p;
    
  }
  else
  {
   //Node<T>* p = new Node<T>;
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
   p = head;
   head = head->next ;
   delete p;
  }
 length--;
}
template <class T>
void Stack<T>:: copy(const Stack & other)
{
 if(other.head==NULL)
  {
    head = NULL;
    length=0;
  }
  else
  {
    head= new Node<T>;
    head->key = other.head->key;
    Node<T>*p = other.head;
    p= p->next;
     Node<T>*q = head;
    while(p!=NULL)
    {
      Node<T>*newNode = new Node<T>;
      newNode->key = p->key;
      q->next = newNode;
      q = q->next;
      p=  p->next;
    }
    q->next = NULL;
    delete p;
    delete q;
  }
    length = other.length;
    
}
template< class T>
void Stack<T>:: print()
{
  Node<T>* p;
  p= head;
  while (p!=NULL)
  {
    cout<<p->key<<" ";
    p = p->next;
   // cout<<endl;
   
  }
  delete p;
}
template< class T>
T Stack<T>::Top()
{  
  if(head!=NULL)
    return head->key;
  else
    cout<<"Empty Stack"<< endl; 
}
template< class T>
int Stack<T>::count()
{
  return length;
}