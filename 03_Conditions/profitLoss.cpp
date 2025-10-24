#include<iostream>
using namespace std;

int main(){
  int cp, sp;
  cout << "Enter cost price : ";
  cin >> cp;
  cout << "Enter selling price : ";
  cin >> sp;

  if (cp > sp ){
    cout << "There is loss : " << cp - sp;
  }
  else if(cp == sp){
    cout << "Neutral ";
  }
  else {
    cout << "There is profit : " << sp - cp;
  }
}