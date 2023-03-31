#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList(){
  this->head=NULL;
}

void LinkedList::append(Article newArticle){
  Node* newNode = new Node(newArticle);
    if(head==NULL){
      head = newNode;
    }
    else{
      Node* current = head;
      while(current->next!=NULL){
        current=current->next;
      }
      current->next=newNode;
    }
}

void LinkedList::delete_(string id_){
  if(head->item.getId()==id_){
    if(head->next!=NULL){
      Node* aux = head->next;
      delete head;
      head = aux;
    }
    else{
      delete head;
    }
  }
  else{
    Node* current = head;
    while(current->next->item.getId()!=id_){
      current = current->next;
    }
    Node* aux = current->next;
    current->next=current->next->next;
    delete aux;
  }
}

void LinkedList::empty(){
  Node* deleting = head;
  head = head->next;
  free(deleting);
}

Node LinkedList::searchById(string id_){
  Node* current = head;
  Node* return_ = NULL;
  while(current != NULL){
    if (id_ == current->item.getId()){
      return_ = current;
    }
    else{
      current = current->next;
    }
  }
  return *return_;
}

Node LinkedList::searchbyName(string name_){
  Node* current = head;
  Node* return_ = NULL;
  while(current != NULL){
    if (name_ == current->item.getName()){
      return_ = current;
    }
    else{
      current = current->next;
    }
  }
  return *return_;
}

double LinkedList::get_Total(){
  double total = 0;

  Node* current = head;
  while(current!=NULL){
    total = total+current->item.getPrice();
    current = current->next;
  }
  return total;
}

void LinkedList::printList(){
  Node* current = head;
  while(current!=NULL){
    cout<<"["<<current->item.getName()<<"] -> [$"<<current->item.getPrice()<<"]"<<endl;
    current=current->next;
  }
}