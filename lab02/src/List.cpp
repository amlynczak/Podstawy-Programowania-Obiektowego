#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list)
{
  list->head = NULL;
}

void push_back(slist * list, char c)
{
  slistEl * p, * e;

  e = new slistEl;  
  e->next = NULL;   
  e->data = c;
  p = list->head;
  if( p )
  {
     while( p->next ) p = p->next;
     p->next = e;
  }
  else list->head = e;
}

slistEl * find(slist * list, char c)
{
  slistEl * p = list->head;
  while(p != NULL)
  {
  	if( p->data == c )
  	  break;
  	p = p->next;
  }
  
  return p;
}

void delete_after(slistEl * e){
  if(e!=nullptr && e->next != nullptr){
     slistEl* del = e->next;
     e->next = del->next;
     delete del;
  }
}

void printl(slist * list){
  slistEl* cur = list->head;
  std::cout<<"Moja lista: <";
  for(;cur!=nullptr; cur=cur->next){
    std::cout<<cur->data;
  }
  std::cout<<">"<<std::endl;
}