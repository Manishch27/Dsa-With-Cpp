// Reverse Two numbers using third variable with user input

# include<iostream>
using namespace std;

int main(){
    int Num1, Num2, Num3;

    cout<< "Enter Num1 : "<<endl;
    cin>>Num1;

    cout<< "Enter Num2 : "<<endl;
    cin>>Num2;

    Num3 = Num1; // Num3 is used to store the num1 one value which we will retrieve later

    Num1 = Num2; // Now we assign the value of Num2 into Num1

    Num2 = Num3; // Because we store the value of Num1 into Num3 So, now we can assign it with Num2;

    cout<<"Num1 = "<<Num1<<endl;

    cout<<"Num2 = "<<Num2<<endl;

    // Reverse two  numbers by user input but without using third variable 

    int Number1, Number2;

    cout<<"Enter Number 1 : "<<endl;
    cin>>Number1; 

    cout<<"Enter Number 2 : "<<endl;
    cin>>Number2;

    Number1 = Number1+Number2;

    Number2 = Number1-Number2;  
    
    Number1 = Number1-Number2; 

    cout<<"Number 1 = "<<Number1<<endl;

    cout<<"Number 2 = "<<Number2<<endl;


    return 0;
}