#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "icecream.h"
#include "container.h"
#include "topping.h"
using namespace std;

class Store {
  public:
    Store();

    void addflavor(Icecream a);
    void addcontainer(Container c);
    void addtopping(Topping t);
    string flav_to_string();
    string con_to_string();
    string top_to_string();
  private:
    vector <Icecream> scoop;
    vector <Container> contain;
    vector <Topping> topping;



};
