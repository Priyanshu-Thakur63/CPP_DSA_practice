#include<iostream>
using namespace std;

int main(){
  int n, nsp, nst;
  cout<< "Enter anumber : ";
  cin>> n;
  nst=n-1;
  nsp=1;
  for(int i=1; i<=2*n-1; i++){
    cout<< "*";
  }
  cout<< endl;
  for(int i=1; i<=n-1; i++){
    for(int j=1; j<=nst; j++){
      cout<< "*";
    }
    for(int k=1; k<=nsp; k++){
      cout<< " ";
    }
    for(int j=1; j<=nst; j++){
      cout<< "*";
    }
    nst--;
    nsp+=2;
    cout<< endl;
  }
  return 0;
}