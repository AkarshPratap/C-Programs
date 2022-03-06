#include<iostream>
using namespace std;

bool testing(int n){
    if(n%2 == 0){
        return 1 == 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    bool ans = testing(n);
    if(ans){
        cout<< "is even" <<endl;
    }
    else{
        cout<< "is odd" <<endl;

    }

}