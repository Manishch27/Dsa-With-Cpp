# include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int i;
    for(i=0; i<=n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp; 
    }
    for(i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n], i;

    cout<<"Enter the array elements : "<<endl;

    for( i = 0; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Reverse of the array is = "<<endl;

    reverse(arr, n);

    return 0;
}