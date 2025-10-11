#include<iostream>
using namespace std;

int main(){
  float x,y;
  x = 3;
  y = 2;
  float f_add, f_sub, f_mul, f_div;
  int i_add, i_sub, i_mul, i_div;
  f_add = x+y;
  f_sub = x-y;
  f_mul = x*y;
  f_div = x/y;
  i_add = x+y;
  i_sub = x-y;
  i_mul = x*y;
  i_div = x/y;
  cout << "Using float containers for operators : \n" << "add :" << f_add << endl << "sub :" << f_sub << endl << "div :" << f_div << endl << "mul :" << f_mul << endl;
  cout << "Using int containers for operators : \n" << "add :" << i_add << endl << "sub :" << i_sub << endl << "div :" << i_div << endl << "mul :" << i_mul << endl;
  return 0;
}