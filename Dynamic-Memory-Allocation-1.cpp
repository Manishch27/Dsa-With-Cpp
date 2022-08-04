// Program to find the largest element in an array of N size

# include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;

    int * arr = new int [n], i;

    cout<<"Enter the array elements : "<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = *arr;

    for(i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<max<<" is the largest element in the array"<<endl;\

    delete []arr;
    
    return 0;
}