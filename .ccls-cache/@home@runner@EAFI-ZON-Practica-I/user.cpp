#include <iostream>
#include "user.h"
using namespace std;

User::User(){}
User::User(string username_,string password_){
  this->username=username_;
  this->password=password_;
}

void User::setUsername(string username_){
  this->username=username_;
}
void User::setPassword(string password_){
  this->password=password_;
}
string User::getUsername(){
  return this->username;
}
string User::getPassword(){
  return this->password;
}
string User::getMenu(){
  return this->menu;
}