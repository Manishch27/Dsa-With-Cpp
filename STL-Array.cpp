# include<iostream>
# include<array>
using namespace std;

int main(){
    int i;
    array<int, 5> arr;
    int size = arr.size();

    cout<<"Enter the array elements : "<<endl;
    for(i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The array elements are : "<<endl;
    for(i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    cout<<"First element of the array = "<<arr.front()<<endl;
    cout<<"Last element of the array = "<<arr.back()<<endl;

    cout<<"Your array can hold maximum "<<arr.max_size()<<" elements";

    return 0;
}