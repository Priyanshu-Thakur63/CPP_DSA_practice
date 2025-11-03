// 100, 97, 94, ........ upto all positive
// After calculating value by "a-of-n  = a+(n-1)d"
#include<iostream>
using namespace std;

int main(){
  for(int i= 100 ; i>=1 ; i-=3){
    cout << i << endl;
  }
  return 0;
}