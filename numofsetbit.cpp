#include <iostream>
using namespace std;

int setbits(int n){
    int count = 0;
    int m = n;
    while(m!=0){
        if(m&1){
            count ++;
            m = m>>1;
        }
        else{
            m = m>>1;
        }
    }
    return count;
}

int main(){
    int a, b ;
    cout << " enter the number a , b "<<endl;
    cin >> a >> b;
    int sum = setbits(a) + setbits(b);
    cout<< "the total no. of set bits are-" << sum <<endl; 
}