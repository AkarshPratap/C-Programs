#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    cout<<"printing the array"<<endl;

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << "printing done"<< endl;


}

int main(){
    int n;
    cin>>n;
    int array[n] = {2,4}; 
    printArray(array, n);
}