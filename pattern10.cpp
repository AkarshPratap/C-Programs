#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        int t1 = n-i+1;
        int count = 1;
        while(j<=t1){
            cout<<count;
            count = count + 1;
            j = j+1;
        }

        int t2 = i - 1;
        while(t2){
            cout<<"*";
            t2 = t2 - 1;
        }


        int t3 = i - 1;
        while(t3){
            cout<<"*";
            t3 = t3 - 1;
        }


        int k = n - i + 1;
        while(k>0){
            cout<<k;
            k--;

        }





        cout<<endl;
        i = i + 1;

    }
}