# include<iostream>
# include<stdio.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    int arr[n],i;
    cout<<"Enter the elements of array : "<<endl;
    for(i= 0; i<n; i++){
        cin>>arr[i];
    }
    for(i = 0; i<n; i++){
        cout<<"array "<<"["<<i<<"]"<<" = "<<arr[i]<<endl;
    }
    return 0; 
}