//  Program to find sum of odd number from 1 to N

# include <iostream>
using namespace std ; 
int main(){
    int i=0, num, sum=0;
    cout<<"Enter the number to where you want to print sum : "<<endl;
    cin>>num;
    while(i<=num){
        if(i%2!=0){  // This is the if condition used to check odd number or not;
            sum = sum+i; 
            i++;
        }
        else{
            i++;
        }
    }
    cout<<"sum of odd numbers is = "<<sum;
    return 0;
}