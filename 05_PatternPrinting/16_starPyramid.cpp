#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter a number: ";
  cin>> n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<< "  ";
    }
    int a=1;
    for(int k=1; k<=a; k++){
      cout<< "* ";
      a+=2;
    }
    cout<< endl;
  }
  return 0;
}