#include <iostream>
using namespace std;

int func(int n){

    int a = 0;
    int b = 1;

    for(int i = 1;i<=(n-2) ;i++){
        int nextNumber = a + b;

        a = b;
        b = nextNumber;

    }  
    return b;

}




int main(){
    int n;
    cin >> n;

    int ans = func(n);
    cout << "The nTh term is" << ans <<endl;

}