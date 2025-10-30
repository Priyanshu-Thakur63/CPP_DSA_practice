#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter :";
  cin >> n;

  // M-1
  // for(int i=1 ; i<=n ; i++){
  //   int m= n-i;
  //   for(int j=1 ; j<=m ; j++){
  //     cout<< " ";
  //   }
  //   for(int k=1 ; k<=i ; k++){
  //       cout<< "*";
  //     }
  //   cout<< endl;
  // }

  // M-2
  for(int i=1 ; i<=n ; i++){
    int m= n-i;
    for(int j=1 ; j<=m ; j++){
      cout<< " ";
    }
    for(int k=m+1 ; k<=n ; k++){
        cout<< "*";
      }
    cout<< endl;
  }

  return 0;
}