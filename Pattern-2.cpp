//  Program to print same no. in each row to the number entered by user

# include<iostream>
using namespace std;
int main(){
    int num, row,col;
    cout<<"Enter the number to where you want to print numbers : "<<endl;
    cin>>num;
    row=1;
    while(row<=num){
        col =1;
        while(col<=num){
            cout<<row;
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}