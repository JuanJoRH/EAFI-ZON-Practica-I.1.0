#pragma once
#include <iostream>
#include <string>
using namespace std;

class Input{

  public:
  static string takeUserType();
  static string takeUsername();
  static string takePassword();
  static int takeOption();
  static string takeCategory();
  static string takeId();
  static string takeName();
  static double takePrice();
  static int takeLot();
  static char takeOptionChar();
};