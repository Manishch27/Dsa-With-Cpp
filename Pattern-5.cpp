// Program to print the numbers with the breakpoint on every N number

# include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int row = 1;
     int count = 1;
    while(row<=num){
        int col = 1;
        while(col<=num){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}