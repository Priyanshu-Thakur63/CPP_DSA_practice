// Enter a number : 4
// 1234567
// 123 567
// 12   67
// 1     7

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter a number : ";
  cin>>n;
  int nnb=n-1;
  int nsp=1;
  
  for(int i=1; i<=2*n-1; i++){
    cout<<i;
  }
  cout<< endl;
  for(int i=1; i<=n-1; i++){
    int a=1;
    for(int j=1; j<=nnb; j++){
      cout<<a;
      a++;
    }
    for(int k=1; k<=nsp; k++){
      cout<<" ";
      a++;
    }
    for(int q=1; q<=nnb; q++){
      cout<<a;
      a++;
    }
    nnb--;
    nsp+=2;
    cout<<endl;
  }
  return 0;
}