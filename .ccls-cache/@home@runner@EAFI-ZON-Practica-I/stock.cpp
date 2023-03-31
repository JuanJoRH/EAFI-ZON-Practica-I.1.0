#include <iostream>
#include "sport.h"
#include "tech.h"
#include "foreign.h"
#include "stock.h"
#include "output.h"
using namespace std;

Stock::Stock(){}

void Stock::add_Article(string category_, string id_, string name_, double price_, int lot_){
  
  if(category_=="deporte"){
    Sport* newArticle = new Sport(category_,id_,name_,price_,lot_);
    inventory.append(*newArticle);
  }
  else if(category_=="tecnología"||category_=="tecnologia"){
    Tech* newArticle = new Tech(category_,id_,name_,price_,lot_);
    inventory.append(*newArticle);
  }
  else if(category_=="extranjero"){
    Foreign* newArticle = new Foreign(category_,id_,name_,price_,lot_);
    inventory.append(*newArticle);
  }
}

bool Stock::change_Article(string id_){
  Node article = inventory.searchById(id_);
  bool x=true;
  while(x==true){
    Output::askChange();
    int option = Input::takeOption();
    if(option==1){
      Output::askId();
      article.item.setId(Input::takeId());
      Output::askForNewChange();
      char charOption = Input::takeOptionChar();
      if(charOption=='S' || charOption=='s'){
        Flush::clearScreen();
        continue;
      }
      else{
        x = false;
      }
    }
    else if(option==2){
      Output::askName();
      article.item.setName(Input::takeName());
      Output::askForNewChange();
      char charOption = Input::takeOptionChar();
      if(charOption=='S' || charOption=='s'){
        Flush::clearScreen();
        continue;
      }
      else{
        x = false;
        }
    }
    else if(option==3){
      Output::askPrice();
      article.item.setPrice(Input::takePrice());
      Output::askForNewChange();
      char charOption = Input::takeOptionChar();
      if(charOption=='S' || charOption=='s'){
        Flush::clearScreen();
        continue;
      }
      else{
        x = false;
      }
    }
    else if(option==4){
      Output::askLot();
      article.item.setLot(Input::takeLot());
      Output::askForNewChange();
      char charOption = Input::takeOptionChar();
      if(charOption=='S' || charOption=='s'){
        Flush::clearScreen();
        continue;
      }
      else{
        x = false;
      }
    }
  }
  return x;
}

void Stock::delete_Article(string id_){
  inventory.delete_(id_);
  Output::showCorrectDelete();
}

void Stock::printStock(){
  inventory.printList();
}