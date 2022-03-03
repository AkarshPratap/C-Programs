#include <iostream>
using namespace std;


bool isEven(int n){

    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cin >> num;

    int final = isEven(num);



    if(final){
        cout << "The number is even" <<endl;

    }

    else{
        cout << "the number is odd" <<endl;
    }
}