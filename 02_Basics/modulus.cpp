#include<iostream>
using namespace std;

int main(){
  int x,y, rem;
  cout << "Enter two number that is First one should be greater than the second one : ";
  cin >> x >> y;
  if (x > y){
    rem = x%y;
    cout << "Remainder is :" << rem;
  }
  else {
    cout << "Error! First input is not greater than the second one";
  }

  return 0;
}