#include <iostream>
#include "flush.h"
using namespace std;

void Flush::clearScreen(){
  #ifdef _WIN32
    system("cls");
  #else
    cout << "\033[2J\033[1;1H";
  #endif
}