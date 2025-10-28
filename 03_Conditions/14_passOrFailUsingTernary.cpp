#include<iostream>
using namespace std;

int main(){
  float per;
  cout << "Enter your percentage : ";
  cin >> per;
  (per>33)? cout << "Paased!" : cout << "Failed!";
  return 0;
}