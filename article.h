#pragma once
#include<string>
#include <iostream>
using namespace std;

class Article{

  public:
  Article();
  Article(string,string,string,double,int);
  void setCategory(string);
  void setId(string);
  void setName(string);
  void setPrice(double);
  void setLot(int);
  virtual string getCategory();
  virtual string getId();
  virtual string getName();
  virtual double getPrice();
  virtual int getLot();
  
  protected:
  string category;  
  string id;
  string name;
  double price;
  int lot;
};