//  Check whether the condition of pythagorean triplet or not

# include<iostream>
# include<math.h>
using namespace std;

int pytCheck(double h,  double b, double p){
    if(pow(h , 2) == pow(b,2)+pow(p,2)){
        return 1;     
    }
    else{
        return 0;
    }
}

int main(){
    int h, b, p;
    cout<<"Enter the value of hypotenuse : "<<endl;
    cin>>h;
    cout<<"Enter the value of base : "<<endl;
    cin>>b;
    cout<<"Enter the value of perpendicular : "<<endl;
    cin>>p;
    
    if(pytCheck(h, b, p)){
        cout<<"It is a pythagorean triplet"<<endl;
    }
    else{
        cout<<"It is not a pythagorean triplet"<<endl;
    }
    return 0;
}

