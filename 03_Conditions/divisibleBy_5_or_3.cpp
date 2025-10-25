#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter an positive number : ";
  cin >> n;

  if (n > 0){
    if(n%3==0 || n%5==0){
      cout << "Divisible by 5 or 3";
    }

    else{
      cout << "Not divisible by 5 or 3";
    }
  }

  else{
    cout << "Wrong input";
  }

  return 0;
}