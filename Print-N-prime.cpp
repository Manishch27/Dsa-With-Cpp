//  Program to print first n prime numbers
# include<iostream>
using namespace std;

// Isprime Function 
bool Isprime(int n){
    if(n==0||n==1){
        return false;
    }
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// main function

int main(){
    int num=100, i;
    cout<<"Enter how many prime numbers you want to print : "<<endl;
    cin>>num;
    for(i=1; i<=num; i++){
        if(Isprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
