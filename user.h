#pragma once
#include<string>
#include "LinkedList.h"
#include <iostream>
using namespace std;

class User{
  public:
  User();
  User(string,string);
  void setUsername(string);
  void setPassword(string);
  virtual string getUsername();
  virtual string getPassword();
  virtual string getMenu();

  protected:
  string username;
  string password;
  string menu;
};