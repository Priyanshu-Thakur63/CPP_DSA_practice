// Enter a odd number : 5
//     *     
//     *
// * * * * *
//     *
//     *

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter a odd number : ";
  cin>> n;
  if(n%2!=0){
    for(int i=1 ; i<=n ; i++){
      for(int j=1 ; j<=n ; j++){
        if(i!=(n/2+1) && j==(n/2+1)){
          cout<< "* ";
        }
        else if(i==(n/2+1)){
          cout<< "* ";
        }
        else{
          cout<< "  ";
        }
        
      }
      cout<< endl;
    }
  }
  else{
    cout<< "Invalid: Not an odd input";
  }
  return 0;
}