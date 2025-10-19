#include<iostream>
using namespace std;

int main(){
  float p,r,t,si;
  cout <<"Enter Principle amount :";
  cin >> p;
  cout <<"Enter Rate of interest :";
  cin >> r;
  cout <<"Enter Time :";
  cin >> t;
  si = (p*r*t)/100;
  cout << "Simple interest is : " << si << endl;
  return 0;
}