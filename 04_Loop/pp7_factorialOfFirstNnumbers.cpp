#include<iostream>
using namespace std;
int main(){
  int n;
  cout<< "Enter terms: ";
  cin>> n;
  int a=1;
  for(int i=1; i<=n; i++){
    a*=i;
    cout<< a << endl;
  }
  return 0;
}