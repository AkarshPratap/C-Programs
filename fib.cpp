#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int a = 0;
    int b = 1;
    cout << a << " " <<b << " ";
    for(int i = 1;i<=(n-2) ;i++){
        int nextNumber = a + b;
        cout<< nextNumber <<" ";

        a = b;
        b = nextNumber;

    }  
}