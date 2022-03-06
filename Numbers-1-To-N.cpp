//  Program to print the numbers from 1 to N, Value of n entered by the user

# include <iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Enter the number to where you want to print the numbers : "<<endl;
    cin>>num;
    i = 1;
    while(i<=num){
        cout<<i<<endl;
        i++;
    }
    return 0;
}