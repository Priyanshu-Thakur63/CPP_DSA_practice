// WAP to calculate a raised to power b

#include<iostream>
using namespace std;

int main(){
  int a,b,p;
  cout << "Enter base : ";
  cin >> a;
  cout << "Enter exponent : ";
  cin >> b;
  p=1;
  for(int i =1; i<=b; i++){
    p*=a;
  }
  cout << "Value : " << p;
  return 0;
}