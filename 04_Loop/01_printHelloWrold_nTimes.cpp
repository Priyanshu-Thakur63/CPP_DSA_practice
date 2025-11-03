#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter number of times you want to print hello world : ";
  cin>> n;
  for(int i=1 ;i<=n ; i++){
    cout << i << ". Hello world!" << endl;
  }
  return 0;
}