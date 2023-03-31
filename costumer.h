#pragma once
#include <iostream>
#include "user.h"
#include "stock.h"
using namespace std;

class Costumer:public User{
  public:
  Costumer();
  Costumer(string, string);
  void setMenu(string);
  string getMenu();
  LinkedList cart;
  bool buy(Stock);
  void pay();
};