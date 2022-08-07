# include<iostream>
using namespace std;

class Car{
    float price;
    public:
    string Brand;
    string Model;
    int  year;

    Car(float price, string brand, string model, int &year){   // constructor with parameters
        this->price = price;
        this->Brand = brand;
        this->Model = model;
        this->year = year;
    }

    int *  printInfo(){    
        cout<<"Brand = "<<Brand<<endl;
        cout<<"Model = "<<Model<<endl;
        cout<<"Year = "<<year<<endl;
        cout<<"Price = "<<price<<endl;
        return 0;
    }

    //  Setter to set the price of a car 
    void setPrice(float price){
        this->price = price; 
    }

    // Getter to print the price of a car
    int getPrice(){
        return price;
    }

};

int main(){
    int *year;

    string brand, model;

    float price;

    cout<<"Enter the Brand of the  car1 : "<<endl;
    cin>>brand;

    cout<<"Enter the Model of the car : "<<endl;
    cin>>model;

    cout<<"Enter the Year of the car : "<<endl;
    cin>>*year;

    cout<<"Enter the Price of the car : "<<endl;
    cin>>price;

    Car * car1 = new Car(price, brand, model, *year);

    *car1->printInfo();

    car1->setPrice(price);

    cout<<"The price of the car is = "<<car1->getPrice();
    
    delete car1;
    
    return 0;
}
