#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter an Positive integer :";
  cin >> n;

  if(n > 0){
    if(n%5 == 0){
      cout << "Divisible by 5";
    }

    else{
      cout << "Not Divisible by 5";
    }
  }

  else{
    cout << "Wrong Input ";
  }
  return 0;
}