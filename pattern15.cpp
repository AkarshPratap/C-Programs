#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 0;
    while(i<n){
        char ch = 'A'+i;
        int j=0;
        while(j<n){
            cout<<ch;
            ch = ch +1;
            
            j = j+1;

        }cout<<endl;
        i=i+1;
        
    }
}