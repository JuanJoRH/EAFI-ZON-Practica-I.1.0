#include <iostream>
#include "article.h"
#include "costumer.h"
#include "flush.h"
#include "input.h"
#include "LinkedList.h"
#include "manager.h"
#include "node.h"
#include "output.h"
#include "sport.h"
#include "stock.h"
#include "tech.h"
#include "user.h"
#include "processing.h"

using namespace std;


int main(){

  Processing* system = new Processing();

  system->run();

  return 0;
}