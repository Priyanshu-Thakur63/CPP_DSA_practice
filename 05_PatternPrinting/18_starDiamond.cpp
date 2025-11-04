// Using nsp & nst method

// Enter a number : 5
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
#include<iostream>
using namespace std;
int main(){
  int n,nsp,nst;
  cout<< "Enter a number : ";
  cin>> n;
  nsp=n-1;
  nst=1;
  for(int i=1; i<=2*n-1; i++){
    for(int j=1; j<=nsp; j++){
      cout<< " ";
    }
    for(int k=1; k<=nst; k++){
      cout<< "*";
    }
    if(i>=n){
      nsp+=1;
      nst-=2;
    }
    else{
      nsp-=1;
      nst+=2;
    }
    cout<< endl;
  }
  return 0;
}