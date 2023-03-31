#include <iostream>
#include "costumer.h"
#include "output.h"
#include "input.h"
using namespace std;

Costumer::Costumer(){}
Costumer::Costumer(string username_, string password_){
  this->username=username_;
  this->password=password_;
  this->menu= "\n¿Qué deseas hacer?\n\n1-> Comprar artículo\n2-> Pagar\n3-> Salir\n\n";
}
void Costumer::setMenu(string menu_){
  this->menu=menu_;
}
string Costumer::getMenu(){
  return this->menu;
}

bool Costumer::buy(Stock inventory_){
  bool buying=true;
  while(buying==true){
    inventory_.printStock();
    Output::askName();
    string name = Input::takeName();
    Node article = inventory_.inventory.searchbyName(name);
    this->cart.append(article.item);
    inventory_.inventory.searchbyName(name).item.setLot(inventory_.inventory.searchbyName(name).item.getLot()-1);
    Output::askBuyMore();
    char optionChar = Input::takeOptionChar();
    if(optionChar=='s'||optionChar=='S'){
      continue;
    }
    else if(optionChar=='n'||optionChar=='N'){
      buying = false;
    }
  }
  return buying;
}

void Costumer:: pay(){
  double totalPay = cart.get_Total();
  cout<<"El total a pagar es: "<<totalPay<<endl;
  Output::askPayConfirmation();
  int option = Input::takeOption();
  if(option==1){
    Output::printPayDone();
    this->cart.empty();
  }
  else if(option==2){
    Output::printPayCanceled();
    this->cart.empty();
  }
}