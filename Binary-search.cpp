# include<iostream>
using namespace std; 

int BinarySearch(int arr[], int size, int key){

    int s = 0;
    int e = size-1;

    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }

        else{
            e = mid-1;
        }

        mid = (s+e)/2;
    }
    return -1;
    }


    int main(){
        int size;
        cout<<"Enter the size of the array : "<<endl;
        cin>>size;
        int arr[size], i, key;

        cout<<"Enter the array elements : "<<endl;

        for(i=0; i<size; i++){
            cin>>arr[i];
        }

        cout<<"Enter the key you want to search  : "<<endl;
        cin>>key;

        if(BinarySearch(arr, size, key)==-1){
            cout<<"No match found! "<<endl;
        }
        else{
            cout<<"The index of "<< " "<< key<<" "<<"is = "<<BinarySearch(arr, size, key);
        }
        return 0;
    }