// WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<< "Enter a number :";
  cin>> n;
  if(n<=0){
    n=-n;
  }
  int sum=0;
  while(n!=0){
    int rem=n%10;
    if(rem%2==0){
      sum+=rem;
    }
    n/=10;
  }
  cout<<"Even sum is :"<< sum;
  return 0;
}