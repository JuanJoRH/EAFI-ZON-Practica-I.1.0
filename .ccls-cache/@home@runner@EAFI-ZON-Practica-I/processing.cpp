#include <iostream>
#include "processing.h"
using namespace std;

Processing::Processing(){}

void Processing::run(){
  Stock* eafizon = new Stock();
  cout<<"\n¡BIENVENIDO A EAFI-ZON!\n"<<endl;
  bool bigLoop = true;
  while(bigLoop==true){
    Output::askUserType();cout<<"o escriba salir para cerrar el programa:"<<endl;
    string userType = Input::takeUserType();
    if(userType=="administrador"){
      Output::askUsername();
      string username = Input::takeUsername();
      Output::askPassword();
      string password = Input::takePassword();
      Manager* manager = new Manager(username,password);
      Flush::clearScreen();
      bool loop = true;
      while(loop==true){
        Output::showMenu(*manager);
        int option = Input::takeOption();
        if(option==1){
          Flush::clearScreen();
          Output::askCategory();
          string category = Input::takeCategory();
          Output::askId();
          string id = Input::takeId();
          Output::askName();
          string name = Input::takeName();
          Output::askPrice();
          double price = Input::takePrice();
          Output::askLot();
          int lot = Input::takeLot();
  
          manager->add(category,id,name,price,lot,*eafizon);
          continue;
          //profe te queremos :)
          //Juanjo ti amo :)
          //Juanjo dame un hijo
          //Anny ti ama tambien
          
        }
        else if(option==2){
          Flush::clearScreen();
          Output::askId();
          string id = Input::takeId();
          bool change = manager->change(id, *eafizon);
          if(change==false){
            continue;
          }
        }
        else if(option==3){
          Flush::clearScreen();
          Output::askId();
          string id = Input::takeId();
          manager->delete_(id, *eafizon);
          continue;
        }
        else if(option==4){
          Flush::clearScreen();
          loop = false;
        }
      }
    }
    else if(userType=="cliente"){
      Output::askUsername();
      string username = Input::takeUsername();
      Output::askPassword();
      string password = Input::takePassword();
      Costumer* costumer = new Costumer(username,password);
      Flush::clearScreen();
      bool loop = true;
      while(loop==true){
        Output::showMenu(*costumer);
        int option = Input::takeOption();
        if(option==1){
          Flush::clearScreen();
          bool buying = costumer->buy(*eafizon);
          if(buying==false){
            continue;
          }
        }
        else if(option==2){
          Flush::clearScreen();
          costumer->pay();
          continue;
        }
        else if(option==3){
          Flush::clearScreen();
          loop = false;
        }
      }
    }
    else if(userType=="salir"){
      Flush::clearScreen();
      bigLoop=false;
    }
  }
}