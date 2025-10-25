#include<iostream>
using namespace std;

int main(){
  char ch;
  int num_ch;
  cout << "Enter a character : ";
  cin >> ch;
  num_ch = (int)ch;
  if((num_ch>=65 && num_ch<=90) || (num_ch>=97 && num_ch<=122)){
    cout << "Entered character is Alphabet";
  }

  else{
    cout << "Entered character is not alphabet";
  }

  return 0;
}