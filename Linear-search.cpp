// First program for linear search 
# include<iostream>
using namespace std;
int linearSearch(int n, int key, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int num;
    cout<<"Enter the size of the array : ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    } 
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<linearSearch(num, key, arr);

    return 0;
}