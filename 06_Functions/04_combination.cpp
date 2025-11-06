#include<iostream>
using namespace std;

int fact(int n){
  int f=1;
  for(int i=1; i<=n; i++){
    f*=i;
  }
  return f;
}

int combination(int n, int r){
  return fact(n)/(fact(r)*fact(n-r));
}

int main(){
  int n, r;
  cout<< "Enter n : ";
  cin>>n;
  cout<< "Enter r: ";
  cin>> r;
  cout<<"Combination will be :" <<combination(n,r);
  return 0;
}