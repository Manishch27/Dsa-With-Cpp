//  Program to find maximum and minimum element of array 
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n], i, max, min;
    cout<<"Enter the array elements : "<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
        min = arr[0], max = arr[n-1];

        for(i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
        min = arr[i];
        }
    }
    cout<<"Minimum number of array is = "<<min<<" "<<  "And maximum number of array is = "<<max;
    return 0;
}
