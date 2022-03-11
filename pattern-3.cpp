// Pattern to print all number in a row entered by user

# include<iostream>
using namespace std;
int main(){
    int num, row, col;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    row = 1;
    while(row<=num){
        col=1;
        while(col<=num){
            cout<<col;
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}