#include<iostream>
using namespace std;

int main(){
  int n, sum;
  cout << "Enter a number : ";
  cin >> n;
  sum=0;
  while(n!=0){
    sum+=(n%10);
    n/=10;
  }
  cout << "Sum is : " << sum;
  return 0;
}