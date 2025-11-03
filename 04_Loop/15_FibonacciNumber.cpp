#include<iostream>
using namespace std;

int main(){
  int n,a,b,f;
  cout << "Enter value of n : ";
  cin >> n;
  f=1;
  a=0;
  b=1;
  for(int i =1 ; i<= n; i++){
    cout << f << endl;
    f=a+b;
    a=b;
    b=f;
  }
  return 0;
}