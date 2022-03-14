//  Program to print fibonacci series

# include<iostream>
using namespace std;
int main(){
    int num1=0, num2=1, num3, num,i;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    cout<<"Fibonacci Series : "<<num1<<" "<<num2<<" ";
    for(i=1; i<=num; i++){
        num3 = num1+num2;
        cout<<num3<<" ";
        num1 = num2;
        num2 = num3;
    }
    return 0;  
}