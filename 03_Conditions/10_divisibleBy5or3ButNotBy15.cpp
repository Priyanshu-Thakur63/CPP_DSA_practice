// WAP to take a positive integer input and check if it's divisible by 3 or 5 and not by 15

#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter an +ive integer : ";
  cin >> n;
  if(n>=0){
    if(n%3==0 || n%5==0){
      if(n%15!=0){
        cout << "Valid : Divisible by 3 or 5 and not by 15";
      }
      else{
        cout << "Invalid : Divisible by 3 or 5 but also by 15";
      }
    }
    else{
      cout << "Invalid : Not divisible by 3 or 5";
    }
  }
  else{
    cout << "Invalid : Not a positive integer";
  }
  return 0;
}