//  Program to check whether the year entered by user is leap year or not

# include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year : "<<endl;
    cin>>year;
    if(year%4==0){
        cout<<"Leap Year";
    }
            else{
        cout<<"Not a leap Year";
        }
        return 0;
}