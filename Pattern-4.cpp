// Pattern to print all numbers in reverse order in each row

# include<iostream>
using namespace std;
int main(){
    int row, col, num;
    cout<<"Enter the number to where you want to print numbers :  "<<endl;
    cin>>num;
    row=1;
    while(row<=num){
        col=num;
        while(col>=1){
            cout<<col;
            col--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}