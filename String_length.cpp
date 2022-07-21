// Program to find the length of the string

# include<iostream>
using namespace std; 

int getLength(char str[]){
    int count = 0;

    for(int i=0; str[i]!='\0'; i++){
        count++;
    } 
    return count;
}

int main(){
    char str[20];
    cout<<"Enter your name : "<<endl;
    cin>>str;
    
    cout<<"Lenth of the string is = "<<getLength(str)<<endl;
    
    return 0;
}