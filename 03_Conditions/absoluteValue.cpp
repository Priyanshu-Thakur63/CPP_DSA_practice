#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter an integer : ";
  cin >> n;
  if (n >= 0){
    cout << "Absolute Value is : " << n;
  }

  else{
    cout << "Absolute Value is : " << -n;
  }
  return 0;
}


// More Version

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout << "Enter an integer : ";
//   cin >> n;
//   if (n < 0){
//     n = -n;
//   }
    
//   cout << "Absolute Value is : " << n;
//   return 0;
// }