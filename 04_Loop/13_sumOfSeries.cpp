// WAP to find sum of the series 1-2+3-4+5

#include<iostream>
using namespace std;

int main(){
 int n, sum;
 cout << "Enter value of n : ";
 cin >> n;
 sum=0;
 for(int i =1 ; i<=n; i++){
  if(i%2==0){
    sum-=i;
  }
  else{
    sum+=i;
  }
 }
 cout << "Sum of the series is : " << sum;
 return 0;
}