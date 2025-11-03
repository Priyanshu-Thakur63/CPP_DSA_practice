#include<iostream>
using namespace std;

int main(){
  int n, r;
  cout << "Enter a number : ";
  cin >> n;
  r=0;
  while(n!=0){
    r*=10;
    r+=(n%10);
    n/=10;
  }
  cout << "Reverse is : " << r;
  return 0;
}