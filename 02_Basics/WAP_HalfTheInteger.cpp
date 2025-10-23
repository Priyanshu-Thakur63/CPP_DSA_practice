// WAP to take integer as input and print half of the number
#include<iostream>
using namespace std;;

int main(){
  int num;
  cout << "Enter a number :";
  cin >> num;
  float fnum;
  fnum = (float)num;
  fnum/=2;;
  cout << "Half of the number is :" << fnum;
  return 0;
}