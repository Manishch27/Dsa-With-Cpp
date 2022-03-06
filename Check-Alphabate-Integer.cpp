/* Check whether an Alphabate or integer entered by user is small case, upper case or lies between 0-9. */

# include "iostream";
using namespace std ;

int main(){
    char ch;
    cout<<"Enter anything : " <<endl ;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"It is an small letter" ;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"It is a capital letter";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"It is an integer";
    }
    return 0;
}

//  Logic Second to solve this question with the help of Ascii Values.

int main(){
    char ch;
    cout<<"Enter Anything : " <<endl;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<< "It is a Capital case letter";
    }
    else if(ch>=97 && ch<=122){
        cout<<"It is an Small case letter";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"it is an integer";
    }
    else{
        cout<<"Wrong input! ";
    }
    return 0;
}
