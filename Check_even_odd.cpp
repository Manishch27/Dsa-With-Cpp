// Check whether a number entered by user is even or odd
# include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : "<<endl;
    cin>>num;

    if(num%2==0){
        cout<<"It is an even number"<<endl;
    }
    else{
        cout<<"It is an odd number"<<endl;
    }
    return 0;
}