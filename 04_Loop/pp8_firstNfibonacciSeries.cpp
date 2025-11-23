#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter terms :";
  cin>> n;
  int a,b,r;
  a=0, b=1;
  r=0;
  for(int i=1; i<=n; i++){
    a=b;
    b=r;
    r=a+b;
    cout<< r<< endl;
  }
  return 0;
}