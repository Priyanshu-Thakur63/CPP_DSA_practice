#include<iostream>
using namespace std;

int main(){
  float fnum, fraction;
  cout << "Enter number :";
  cin >> fnum;
  int inum;
  inum = (int)fnum;
  fraction = fnum - inum;
  cout << "The fractional Part is : " << fraction;
  return 0;
}