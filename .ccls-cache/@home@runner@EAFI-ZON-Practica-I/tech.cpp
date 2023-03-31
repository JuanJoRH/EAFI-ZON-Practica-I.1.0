#include<iostream>
#include "tech.h"
using namespace std;

Tech::Tech(){};
Tech::Tech(string category_,string id_,string name_,double price_,int lot_){
  this->category=category_;
  this->id=id_;
  this->name=name_;
  this->price=price_;
  this->lot=lot_;
}