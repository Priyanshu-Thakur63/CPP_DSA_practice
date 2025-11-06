#include<iostream>
using namespace std;

int gcd(int a, int b){
  for(int i=min(a,b); i>=1; i--){
    return i;
  }
}

int main(){
  int a,b;
  cout<<"Enter two number: ";
  cin>>a >>b;
  cout<< "HCF is: "<< gcd(a,b);
  return 0;
}