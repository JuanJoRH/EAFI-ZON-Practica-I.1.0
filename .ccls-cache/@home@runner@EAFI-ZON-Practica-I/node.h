#pragma once
#include "article.h"
#include <iostream>
using namespace std;

class Node{

  public:
  Article item;
  Node* next;
  Node(Article);
};