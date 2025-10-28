#include<iostream>
using namespace std;

int main(){
  int a, b, c;
  cout << "Enter three sides of Triangle : ";
  cin >> a >> b >> c;
  if(((a+b>c) && (a+c>b)) || ((a+c>b) && (b+c>a)) || ((a+b>c) && (b+c>a))){
    cout << "valid: Can be an Triangle";
  }
  else{
    cout << "Invalid: Can not be an Triangle";
  }

  return 0;
}