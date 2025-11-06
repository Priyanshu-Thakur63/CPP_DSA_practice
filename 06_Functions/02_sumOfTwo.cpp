#include<iostream>
using namespace std;

void sum(int a, int b){
  cout<< "The sum is : "<< a+b;
}

int main(){
  int a,b;
  cout<< "Enter First number : ";
  cin>> a;
  cout<< "Enter second number : ";
  cin>> b;
  sum(a,b);
  return 0;
}