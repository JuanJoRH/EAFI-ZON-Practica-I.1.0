#pragma once
#include <iostream>
#include "article.h"
using namespace std;

class Foreign:public Article{

  public:
  Foreign();
  Foreign(string,string,string,double,int);

  private:
  float tax;
}