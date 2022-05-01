//  pointers is variable which stores the memory address of another variable

# include <iostream>
using namespace std;
int main(){
    // Single pointer

    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int *ptr1 = &n;
    cout<<"The memory address of ptr1 is = "<<ptr1<<endl;
    cout<<"The value of *ptr1 is = "<<*ptr1<<endl;

    //  Double pointer

    int m;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int *ptr2 = &n;
    int **dptr = &ptr2;
    cout<<"The memory address of ptr2 is = "<<ptr2<<endl;
    cout<<"The value of *ptr2 is = "<<*ptr2<<endl;
    cout<<"The memory address of dptr is = "<<dptr<<endl;
    cout<<"The value of **dptr is = "<<**dptr<<endl;

    return 0; 
}