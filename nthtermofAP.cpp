#include<iostream>
using namespace std;

int func(int n){
    n = (3*n)+7 ;
    return n;

}


int main(){
    int n;
    cin >> n;

    int ans = func(n);
    cout << "The nTh term is" << ans <<endl;

}