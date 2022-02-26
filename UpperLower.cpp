#include <iostream>
using namespace std;
int main(){
  char ch;
  cin>>ch;
  int n = ch;
  if(n>=65 && n<=90){
    cout<<"this is uppercase " << endl;
  }
  else if(n>=97 && n<=122){
    cout<< "this is lowercase " << endl;
  }
  else if(n>=0 && n<=9){
    cout<< "this is a number" <<endl;
  }
}