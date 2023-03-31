#pragma once
#include <iostream>
#include "LinkedList.h"
#include "user.h"
using namespace std;

class Output{

  public:
  static void askUserType();
  static void askUsername();
  static void askPassword();
  static void showMenu(User);
  static void askCategory();
  static void askId();
  static void askName();
  static void askPrice();
  static void askLot();
  static void askChange();
  static void askForNewChange();
  static void showCorrectDelete();
  static void showInventory(LinkedList);
  static void askBuyMore();
  static void showTotal(LinkedList);
  static void askPayConfirmation();
  static void printPayDone();
  static void printPayCanceled();
};