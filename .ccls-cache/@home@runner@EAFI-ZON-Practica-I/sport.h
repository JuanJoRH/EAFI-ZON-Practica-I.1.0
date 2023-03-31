#pragma once
#include<string>
#include "article.h"
#include <iostream>
using namespace std;

class Sport: public Article{

  public:
  Sport();
  Sport(string,string,string,double,int);
};