// There are two types of arrays first one is one-Dimensional or second one is multi-Dimensional
# include<iostream>
using namespace std;
int main(){
    //  one Dimensional array

    int arr[5] = {1,2,3,4,5};

    for(int i = 0; i<5; i++){
        cout<<arr[i];
    }
    cout <<endl;

    // Two Dimensional array

    int mat[4][4] = {{1,2,3,4},{5,6,7,8}};

    for(int i=0; i<4; i++ ){
        for(int j = 0; j<4; j++){
        cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    }