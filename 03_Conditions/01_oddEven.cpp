#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter an positive integer :";
  cin >> n;
  if(n > 0){
    if(n%2 == 0){
      cout << "The given number is Even";
    }

    else{
      cout << "The given number is Odd";
    }
  }

  else{
    cout << "Wrong input";
  }
  return 0;
}