//  Program to calculate nCr using formula nCr = n!/r!*(n-r)!

# include<iostream>
using namespace std;

//  Factorial function
int fact(int n){
    int fact =1;
    for (int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
} 

//  int main function

int main(){
    int nCr, n, r;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Enter the value of : "<<endl;
    cin>>r;
    if(n<r){
        cout<<"Please enter the value of n greater than or equal to r"<<endl;
    }
    else{
    nCr = fact(n)/(fact(r)*fact(n-r));
    cout<<"Combinations (nCr) is = "<<nCr;
    }
    return 0;
}