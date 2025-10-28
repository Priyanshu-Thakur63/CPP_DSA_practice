// WAP to take an character input and check if it's a Vowel or consonant
#include<iostream>
using namespace std;

int main(){
  char ch;
  cout << "Enter a character : ";
  cin >> ch;
  if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
    if(ch=='i' || ch=='e' || ch=='a' || ch=='o' || ch=='u' || ch=='I' || ch=='E' || ch=='A' || ch=='O' || ch=='U'){
      cout << "Char is Vowel";
    }
    else{
      cout << "Char is Consonant";
    }
  }
  else{
    cout << "Invalid : Not an Alphabet";
  }
}