#pragma once
#include <iostream>
#include "user.h"
#include "stock.h"
using namespace std;

class Manager:public User{

  public:
  Manager();
  Manager(string,string);
  void setMenu(string);
  string getMenu();
  void add(string, string, string, double, int, Stock);
  bool change(string, Stock);
  void delete_(string, Stock);
};