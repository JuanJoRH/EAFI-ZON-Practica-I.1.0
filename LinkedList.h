#pragma once
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList{

  public:
  Node* head=NULL;

  LinkedList();
  void append(Article);
  void delete_(string);
  void empty();
  Node searchById(string);
  Node searchbyName(string);
  double get_Total();
  void printList();
};