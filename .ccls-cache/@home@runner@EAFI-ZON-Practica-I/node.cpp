#include <iostream>
#include "node.h"
using namespace std;

Node::Node(Article article){
  this->item=article;
  this->next=NULL;
}