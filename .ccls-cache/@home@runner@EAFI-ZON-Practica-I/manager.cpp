#include <iostream>
#include "manager.h"

using namespace std;

Manager::Manager(){}
Manager::Manager(string username_,string password_){
  this->username=username_;
  this->username=password_;
  this->menu="\n¿Qué deseas hacer?\n\n1-> Agregar artículo\n2-> Modificar artículo\n3-> Eliminar artículo\n4-> Salir\n\n";
}
void Manager::setMenu(string menu_){
  this->menu=menu_;
}
string Manager::getMenu(){
  return this->menu;
}

void Manager::add(string category_,string id_, string name_, double price_, int lot_, Stock inventory_){
  inventory_.add_Article(category_,id_,name_,price_,lot_);
}

bool Manager::change(string id_, Stock inventory_){
  bool change = inventory_.change_Article(id_);
  return change;
}

void Manager::delete_(string id_, Stock inventory_){
  inventory_.delete_Article(id_);
}