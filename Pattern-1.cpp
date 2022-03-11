// Program to print square using star patterns

# include<iostream>
using namespace std;
int main(){
    int row, col, num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    row =1;
    //  For this pattern we use two while loop one is outer or another is inner 
    while(row<=num){  // This while loop is used to print rows   
        col = 1;
        while(col<=num){  // And this is used to print columns
            cout<<"*";
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}