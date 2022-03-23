// Program to find the sum of 1D array
# include <iostream>
using namespace std;

int main(){
    int arr[4], i, sum=0;
    cout<<"Enter the array elements : "<<endl;
    for(i=0; i<4; i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout << sum;
    return 0;
}