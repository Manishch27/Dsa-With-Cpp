//  Program to reverse a number

# include <iostream>
using namespace std;
void rev(int num){
    int reverse = 0;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    while(num!=0){
        int rem = num%10;
        reverse = reverse*10+rem;
        num/=10;
        cout<<rem;
    }
}

int main(){
    int num;
    rev(num);
    return 0;
    }
