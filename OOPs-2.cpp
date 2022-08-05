// Program to make a game heros with object oriented programming

# include<iostream>
using namespace std;

class Hero{
    int Health;
    public:
    string Name;
    int Level;

    string printName(){
        return Name;
    }

    int printLevel(){
        return Level;
    }

    void setHealth(int *s){
        Health = *s;
    }
    
    int getHealth(){
        return Health;
    }

};

int main(){
    int n;
    cout<<"Enter the number of characters in the game : "<<endl;
    cin>>n;

    Hero *arr = new Hero[n];
    int  i, s;
    for(i=0; i<n; i++){
        cout<<"Enter the name of the "<<i+1<<" character : "<<endl;
        cin>>arr[i].Name;

        cout<<"Enter the level of the "<<i+1<<" character : "<<endl;
        cin>>arr[i].Level;

        cout<<"Enter the Health of  the "<<i+1<<" character : "<<endl;
        cin>>s;
        arr[i].setHealth(&s);
    } 

    for(i= 0; i<n; i++){
        cout<<" <---------- Details of "<<arr[i].printName()<<" are ----------> "<<endl;
        cout<<"Name = "<<arr[i].printName()<<endl;
        cout<<"Level = "<<arr[i].printLevel()<<endl;
        cout<<"Health = "<<arr[i].getHealth()<<endl<<endl; 
    }
    delete []arr;

    return 0;
}