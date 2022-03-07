// Program to find the sum of N numbers input by user
# include<iostream>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"Enter a number to where you want to print sum : "<<endl;
    cin>>num;
    for(i=1; i<=num; i++){
        sum =sum+i;
    }
    cout<<"Sum is = "<<sum;
    return 0;
}