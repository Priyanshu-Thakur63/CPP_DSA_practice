// Display this gp 1, 2, 4, 8, 16 

#include<iostream>
using namespace std;

int main(){
  int n, a;
  cout<< "Enter a number : ";
  cin>> n;
  a=1;
  for(int i= 1 ; i<=n ; i++){
    cout<< a << endl;
    a = a*2;
  }
  return 0;
}