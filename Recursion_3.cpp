// Program to find the sum of a N digit number 
# include<iostream>
using namespace std;
int digiSum(int num){
    int sum = 0; 
    if(num==0){
        return sum;
    }

    int rem = num%10;

    sum = rem+digiSum(num/10);

}

int main(){
    int num;
    cin>>num;
    cout<<"Sum of the digits of the number you entered is = "<<digiSum(num);
}