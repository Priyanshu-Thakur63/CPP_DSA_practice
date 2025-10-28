// WAP to take percentage of student and print their grade
#include<iostream>
using namespace std;

int main(){
  float per;
  cout << "Enter your percentage : ";
  cin >> per;
  if(per > 90){
    cout << "Excellent";
  }
  else if(per<90 && per>=81){
    cout << "Very good";
  }
  else if(per<80 && per>=71){
    cout << "Good";
  }
  else if(per<70 && per>=61){
    cout << "Can do better";
  }
  else if(per<60 && per>=51){
    cout << "Average";
  }
  else if(per<=50 && per>41){
    cout << "Below average";
  }
  else if(per<=40 && per>=0){
    cout << "Fail";
  }
  else {
    cout << "Invalid percentage";
  }
  return 0;
}