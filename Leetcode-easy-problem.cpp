// Program to Subtract the Product and Sum of Digits of an Integer

# include<iostream>
using namespace std;
int main(){
    int sum = 0, prod = 1, num;
    cout<<"Enter a number of any digit : ";
    cin>>num;
    while(num>0){
        int i = num%10;
        sum = sum+i;
        prod = prod*i;

        num = num/10;
    }
    int answer = prod-sum;
    cout<<"Subtract Of Product and Sum of number you enter = "<<answer;
    return 0;
}