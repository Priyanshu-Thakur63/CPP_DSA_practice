// Display this AP 1, 3, 5, 7, 9
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter balue of n :";
  cin >> n;
  for(int i= 1; i<=n ; i++){
    cout<< (2*i-1) << endl;
  }
  return 0;
}