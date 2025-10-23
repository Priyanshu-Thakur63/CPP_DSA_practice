// WAP to find the placement or number of alphabet
// i.e. A =1, B =2, C =3
#include<iostream>
using namespace std;

int main(){
  char ch;
  int num;
  cout << "Enter the Upper Case Alphabet :";
  cin >> ch;
  num =(int)ch;
  if (num >= 64 && num <=90){
    num-=64;
    cout << "The Place of Alphabet is :" << num;
  }
  else{
    cout << "Wrong input";
  }
  return 0;
}