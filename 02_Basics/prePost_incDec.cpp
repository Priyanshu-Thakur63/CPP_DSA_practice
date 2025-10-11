#include<iostream>
using namespace std;

int main(){
  int a,b,c,d;
  a=b=c=d=5;
  cout << "First use : " << endl << a++ << endl << b-- << endl << ++c << endl << --d << endl;
  cout << "Second use : " << endl << a << endl << b << endl << c << endl << d << endl;
 return 0;
}