#include <iostream>
using namespace std;

int sum(int arr[],int size){
    int sum = 0;
    for(int i = 0; i<size ;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
 
    int arr[100];
     for(int i = 0;i < n;i++){
         cin  >> arr[i];
     }

     int ans = sum(arr,n);
     cout << ans <<endl;

}