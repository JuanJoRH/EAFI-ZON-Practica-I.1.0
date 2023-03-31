#include <iostream>
#include "foreign.h"
using namespace std;

Foreign::Foreign(){}
Foreign::Foreign(string category_,string id_,string name_,double price_,int lot_){
  this->category=category_;
  this->id=id_;
  this->name=name_;
  this->price=price_*this->tax;
  this->lot=lot_;
  this->tax=0.19;
}