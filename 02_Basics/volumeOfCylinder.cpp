// WAP for finding the volume of the cylinder by taking radius and height as input.
// V=pi*r*r*h
#include<iostream>
using namespace std;
int main(){
  int r, h;
  float v,pi = 3.14;
  cout<< "Enter radius and height respectfully :";
  cin>> r>> h;
  v=pi*r*r*h;
  cout<< "Volume of the cylinder is :" << v;
  return 0;
}