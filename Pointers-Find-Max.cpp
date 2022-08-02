// Program to find the greatest element in an array using pointers 

# include<iostream>
using namespace std;
int Max(int *arr, int size){

    int max = *arr;

    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[5];
    cout<<"Enter five elements of the array : "<<endl;
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"The largest element in the array is = "<<Max(arr, 5)<<endl;

    return 0;
}