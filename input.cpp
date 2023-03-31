#include <iostream>
#include "input.h"
using namespace std;

string Input::takeUserType(){
  string userType;
  cin>>userType;

  return userType;
}

string Input::takeUsername(){
  string userName;
  cin>>userName;

  return userName;
}
string Input::takePassword(){
  string password;
  cin>>password;

  return password;
}

int Input::takeOption(){
  int option;
  cin>>option;

  return option;
}

string Input::takeCategory(){
  string category;
  cin>>category;

  return category;
}

string Input::takeId(){
  string id;
  cin>>id;

  return id;
}

string Input::takeName(){
  string name;
  cin>>name;

  return name;
}

double Input::takePrice(){
  double price;
  cin>>price;

  return price;
}

int Input::takeLot(){
  int lot;
  cin>>lot;

  return lot;
}

char Input::takeOptionChar(){
  char option;
  cin>>option;

  return option;
}