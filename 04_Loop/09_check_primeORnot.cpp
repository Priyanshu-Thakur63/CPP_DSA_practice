// WAP to check if number is prime or not
#include<iostream>
using namespace std;

int main(){
  int n;
  bool flag = true;
  cout << "Enter anumber : ";
  cin >> n;
  for(int i =2 ; i<n ; i++){
    if(n%i==0){
      flag = false;
      break;
    }
  }
  if(flag== true){
    cout << "The given number is prime";
  }
  else {
    cout << "The given number is not a prime number";
  }
  return 0;
}