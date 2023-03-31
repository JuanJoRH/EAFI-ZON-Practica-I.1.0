#pragma once
#include<string>
#include "article.h"
#include <iostream>
using namespace std;

class Tech: public Article{
  
  public:
  Tech();
  Tech(string,string,string,double,int);
};