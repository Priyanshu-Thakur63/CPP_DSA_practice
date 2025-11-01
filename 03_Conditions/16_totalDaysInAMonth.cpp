#include<iostream>
using namespace std;

int main(){
  int month, day;
  cout << "Enter month number : ";
  cin >> month;

  if(month>=1 && month<=12){
    if(month==2){
      day= 28;
    }
    else if((month%2!=0 && month!=2 && month<=7) || (month%2==0 && month>7)){
      day= 31;
    }
    else{
      day= 30;
    }
    cout << "Total days : " << day;
  }
  else{
    cout << "Invalid Input";
  }
  
}