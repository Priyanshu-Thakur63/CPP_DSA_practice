// Enter a number : 5
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter a number : ";
  cin>> n;
  for(int i=1 ; i<=n ; i++){
    int a=65;
    for(int j=1 ; j<=n ; j++){
      cout<< (char)a << " ";
      a++;
    }
    cout<< endl;
  }
  return 0;
}