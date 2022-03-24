// Program to print matrix of 2D array

# include<iostream>
using namespace std;
int main(){
    int arr[5] [5] = {{1,2,3,4,5},{5,6,8,6,9}};
    int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout<<arr[i] [j];
        }
        cout<<endl;
    }
    return 0;
}