// program to find the sum of elements of a two Dimensional array

# include<iostream>
using namespace std;
int main(){
    int a[5][5], b[5][5], c[5][5];
    int i, j , sum=0;
    cout<<"Enter the elements of First array : "<<endl;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin>>a[i][j];
        }
    }
        cout<<"Enter the elements of Second array : "<<endl;
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                cin>>b[i][j];
            }
        }
        cout<<"<------------First Array Elements------------>"<<endl;
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<"<------------Second Array Elements------------>"<<endl;
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                cout<<b[i][j];
            }
            cout<<endl;
        }
        cout << "<------------First + Second = Third Array------------>"<<endl;
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                c[i][j] = a[i][j]+b[i][j];
                cout<<c[i][j];
            }
            cout<<endl;
        }
 return 0;
}