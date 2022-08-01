// Program to find the factorial of a number

# include<iostream>
using namespace std;

int factorial(int n ){
    if (n==0){
        return 1;
    }

    int fact = n*factorial(n-1);

    return fact;
}

int main(){
    int n; 
    cout<<"Enter a number : "<<endl;
    cin>>n;

    cout<<"Factorial of "<<n<<" is = "<<factorial(n);
    return 0;
}