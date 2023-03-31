#pragma once
#include <iostream>
#include "LinkedList.h"
#include "user.h"
#include "output.h"
#include "input.h"
#include "flush.h"
using namespace std;

class Stock{

  public:
  LinkedList inventory;
  Stock();
  void add_Article(string,string,string,double,int);
  bool change_Article(string);
  void delete_Article(string);
  void printStock();
};