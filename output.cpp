#include <iostream>
#include "output.h"
using namespace std;

void Output::askUserType(){
  cout<<"Ingrese el tipo de usuario(administrador/cliente), ";
}

void Output::askUsername(){
  cout<<"Ingrese el nombre de usuario: "<<endl;
}

void Output::askPassword(){
  cout<<"Ingrese la contraseña: "<<endl;
}
void Output::showMenu(User user){
  cout<<user.getMenu()<<endl;
}
void Output::askCategory(){
  cout<<"Ingrese la categoría del producto: "<<endl;
}
void Output::askId(){
  cout<<"Ingresa el Id del producto(sólo 6 dígitos): "<<endl;
}
void Output::askName(){
  cout<<"Ingrese nombre del producto: "<<endl;
}
void Output::askPrice(){
  cout<<"Ingresa el precio del producto: "<<endl;
}
void Output::askLot(){
  cout<<"Ingresa la cantidad del producto: "<<endl;
}
void Output::askChange(){
  cout<<"¿Qué deseas cambiar del producto?\n1-> Id\n2-> Nombre\n3-> Precio\n4-> Cantidad disponible"<<endl;
}
void Output::askForNewChange(){
  cout<<"¿Deseas realizar otro cambio? (S/N)"<<endl;
}
void Output::showCorrectDelete(){
  cout<<"Se ha eliminado correctamente"<<endl;
}
void Output::showInventory(LinkedList list){
  list.printList();
}
void Output::askBuyMore(){
  cout<<"¿Deseas comprar otro artículo? (S/N)"<<endl;
}
void Output::showTotal(LinkedList list){
  cout<<list.get_Total()<<endl;
}
void Output::askPayConfirmation(){
  cout<<"1-> Confirmar compra\n2-> Cancelar compra"<<endl;
}
void Output::printPayDone(){
  cout<<"Compra realizada con éxito"<<endl;
}
void Output::printPayCanceled(){
  cout<<"La compra ha sido cancelada"<<endl;
}