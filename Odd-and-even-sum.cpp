// Program to find the sum of odd and even numbers from 1 to N
# include <iostream>
using namespace std;
int main(){
    int n,i, even_sum = 0, odd_sum=0;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    for(i=1; i<=n; i++){
        if(i%2==0){
            even_sum += i; 
        }
        else{
            odd_sum += i;
        }
    }
    cout<<"The sum of even numbers is = "<<even_sum<<endl;
    cout<<"The sum of odd numbers is = "<<odd_sum<<endl;
    return 0;
}