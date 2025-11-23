// Write a C++ program to identify and print all Armstrong numbers within the range of 1 to 500.
//Definition for this problem: An integer is considered an Armstrong number if the sum of the cubes of its digits is equal to the number itself (e.g., $153 = 1^3 + 5^3 + 3^3$).
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number :";
  cin>> n;
  for(int i=1; i<=n; i++){
    int a=i,r=0,count=0;
    while(a!=0){
      count++;
      a/=10;
    }
    a=i;
    while(a!=0){
      int temp=1;
      for(int j=1; j<=count; j++){
        temp*=(a%10);
      }
      r+=temp;
      a/=10;
    }
    if(i==r){
      cout<< i<< endl;
    }
  }
}