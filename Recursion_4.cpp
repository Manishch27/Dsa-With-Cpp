// Program to print the Nth fibonacci number

# include<iostream>
using namespace std;

int fib(int num){
    if(num==0){
        return 0;
    }

    if(num==1){
        return 1;
    }
    return fib(num-1)+fib(num-2);
}

int main(){
    int num;
    cout<<"Enter the position "<<endl;
    cin>>num;

    cout<<fib(num);

    return 0;
}
