// Program to print half pyramid after 180 rotation

# include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    for(i=n; i>=0; i--){
        for(j=0; j<n; j++){
            if(j<=i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}