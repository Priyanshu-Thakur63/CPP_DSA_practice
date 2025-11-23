//  WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main(){
  int n1;
  cout<< "Enter a number: ";
  cin >> n1;
  if(n1<0){
    n1=-n1;
  }
  int sum=n1;
  int n2=0;
  while(n1!=0){
    n2 = (n2 * 10) + (n1 % 10);
    n1/=10;
  }
  sum+=n2;
  cout<< "Sum of number and its reverse is: "<< sum;
  return 0;
}