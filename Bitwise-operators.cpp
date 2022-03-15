// Bitwise and/&, Bitwise or/ |, Bitwise not / ~, Bitwise XOR/ ^.   

# include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers : "<<endl;
    cin>>num1>>num2;
    cout<<"number 1 & num2 = "<<(num1&num2)<<endl;
    cout<<"number 1 or num2 = "<<(num1|num2)<<endl;
    cout<<"Negation of number 1 and num 2 = "<<~num1<<~num2<<endl;
    cout<<"XOR of number 1 and number 2 = "<<(num1^num2)<<endl;

//  Left shift << and >> right shift operators

    cout<<(num1<<1)<<endl;
    cout<<(num2<<2)<<endl;
    cout<<(num1>>1)<<endl;
    cout<<(num2>>2)<<endl;
    
    return 0; 
}