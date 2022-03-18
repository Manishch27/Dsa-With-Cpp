//  Program to convert decimal number to binary number

# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int num, answer=0, i=0;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    while(num!=0){
        int bit = num&1; 
        answer = (bit*pow(10,i))+answer;
        num=num>>1;
        i++;
    }
    cout<<answer;
    return 0;
    }