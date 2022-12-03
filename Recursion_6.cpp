// Program to print table of Nth number

# include<iostream>
using namespace std;

void table(int num, int mul){
    
    if(mul>10){
        return;
    }

    cout<< num*mul<<endl;

    return table(num, mul+1);
}

int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    table(num, 1);

    return 0;
}

