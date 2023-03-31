#include<iostream>
#include "sport.h"
#include<cstring>
using namespace std;

Sport::Sport(){};
Sport::Sport(string category_,string id_,string name_,double price_,int lot_){
  this->category=category_;
  this->id=id_;
  this->name=name_;
  this->price=price_;
  this->lot=lot_;
}