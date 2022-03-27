//  Program to print transpose of a matrix

# include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the size of the array : "<<endl;
    cin>>num;
    int a[num][num], b[num][num];
    int i,j;
    cout<<"Enter the elements of array : "<<endl;
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
        cin>>a[i][j];
        }
    }
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            b[i][j] =a[j][i];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}