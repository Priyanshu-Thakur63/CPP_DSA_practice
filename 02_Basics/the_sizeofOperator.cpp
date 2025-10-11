#include<iostream>

int main(){
  int myint = 9;
  char mychar = 'a';
  float myfloat = 0.9;
  double mydouble = 0.09999999999999999999999;
  long mylong = 99999999;
  std::cout<<"-----------------------"<<"\nSize of prebuild datatypes\n"<<"\nSize of int :"<<sizeof(int)<<std::endl;
  std::cout<<"Size of float :"<<sizeof(float)<<std::endl;
  std::cout<<"Size of char :"<<sizeof(char)<<std::endl;
  std::cout<<"Size of double :"<<sizeof(double)<<std::endl;
  std::cout<<"Size of long :"<<sizeof(long)<<std::endl;
  std::cout<<"\n------------------------"<<"\nSize of variables\n"<<"\nSize of mylong :"<<sizeof(mylong)<<std::endl;
  std::cout<<"Size of mydouble :"<<sizeof(mydouble)<<std::endl;
  std::cout<<"Size of mychar :"<<sizeof(mychar)<<std::endl;
  std::cout<<"Size of myint :"<<sizeof(myint)<<std::endl;
  std::cout<<"Size of myfloat :"<<sizeof(myfloat)<<std::endl;
}