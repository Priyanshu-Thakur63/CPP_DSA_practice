// Enter a number : 5
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter a number : ";
  cin>> n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<< "  ";
    }
    for(int k=1; k<=i; k++){
      cout<< k<< " ";
    }
    for(int q=i-1; q>=1; q--){
      cout<< q<< " ";
    }
    cout<<endl;
  }
  return 0;
}