#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter an positive number : ";
  cin >> n;

  if (n >= 0){
    if ( n>99 && n<=999){
      cout << "it's an 3 digit number";
    }
    else {
      cout << "Not a 3 digit number";
    }
  }

  else{
    cout << "Wrong input";
  }
  return 0;
}
