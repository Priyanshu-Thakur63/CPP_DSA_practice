#include<iostream>
using namespace std;

void swap(int a, int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"After swapping a="<<a<< " b="<< b; 
}

int main(){
  int a, b;
  cout<< "Enter two number: ";
  cin>> a>> b;
  cout<<"Before swapping a="<<a<< " b="<< b<< endl;
  swap(a, b);
  return 0;
}