// Program to print numbers in a triangular pattern 

# include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int row = 1;
    while(row<=num){
        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}