#include <string>
#include <vector>
#include "store.h"
#include <iostream>
using namespace std;

void Store::addFlavor(Flavor f){
  scoop.push_back(f);   

}
void Store::addContainer(Container c){
  contain.push_back(c);

}
void Store::addTopping(Topping t){
  topping.push_back(t);

}
string Store::flavor_to_string(){
  string text;
  
  for(i = 0; i<scoop.size;i++){
    text += scoop[i] + " ";

  }
  return text;
}
string Store::con_to_string(){
  string text;

  for(i = 0; i<contain.size;i++){
    text += contain[i] + " ";
  }
  return text;
}
string Store::top_to_string(){
  string text;

  for(i = 0; i<topping.size;i++){
    text += topping[i] + " ";

  }
  return text;
}
