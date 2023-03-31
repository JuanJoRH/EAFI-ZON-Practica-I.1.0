#include<iostream>
#include "article.h"
#include<cstring>
using namespace std;

Article::Article(){};
Article::Article(string category_,string id_, string name_, double price_, int lot_){
  this->id= id_;
  this->name= name_;
  this->price= price_;
  this->lot= lot_;
  this->category=category_;
}

void Article::setCategory(string category_){
  this->category=category_;
}
void Article::setId(string id_){
  this->id=id_;
}
void Article::setName(string name_){
  this->name=name_;
}
void Article::setPrice(double price_){
  this->price=price_;
}
void Article:: setLot(int lot_){
  this->lot=lot_;
}
string Article::getCategory(){
  return this->category;
}
string Article::getId(){
  return this->id;
}
string Article::getName(){
  return this->name;
}
double Article::getPrice(){
  return this->price;
}
int Article::getLot(){
  return this->lot;
}