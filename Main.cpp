//
//  main.cpp
//  Restaurant
//
//  Created by Avishai Rostamian on 3/16/21.
//  Copyright © 2021 Avishai Rostamian. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


class Restaurant{           //Create a class defined as Restaurant

public:                     //Initalize our member variables
    
    string name;
    double price;
    string food[3];
    
    
    
    Restaurant(string name,double price,string food[]){         //Class constructor instantiating our variables
        this->name = name;                                  //Set value of parameter into classes corresponding parameter
        this->price = price;
        for (int i = 0; i < food->length(); i++){
            
            food[i];
        }
    }
    
    virtual void menu() = 0;          //Menu read function defined
};
    
    class Italian_Restaurant:       //New class constructed
public Restaurant{              //Set as inherited class
        public:
    

    string name = "Menizzo's";          //Define variables for specific class
    double price = 10.00;
    string food[3] = {"Pasta","Pizza","Calzone"};

    Italian_Restaurant() : Restaurant(name, price, food){}                //Define variables for specific class
    
    void menu() override{
        cout << name << "menu:" << endl;
        for (int i = 0; i < 3; i++){
            cout << " " << food[i] << " $" << price;
        }
    }
        
};
    
    class Greek_Restaurant:       //New class constructed
public Restaurant{              //Set as inherited class
    public:
        
       string name = "Ezels";         //Define variables for specific class
        double price = 12.00;
        string food[3] = {"Fish","Cigars","Salad"};

        Greek_Restaurant() : Restaurant(name, price, food){}         //Define variables for specific class
        
        void menu() override{
            cout << name << "menu:" << endl;
            for (int i = 0; i < 3; i++){
                cout << " " << food[i] << " $" << price;
            }
        }
        
};
    
    class Chinese_Restaurant:       //New class constructed
public Restaurant{              //Set as inherited class
    public:

        string name = "Chans ";         //Define variables for specific class
        double price = 5.00;
        string food[3] = {"Noodles","Chicken","Wontons"};

        Chinese_Restaurant() : Restaurant(name, price, food){}         //Define variables for specific class
        
        void menu() override{
            cout << name << "menu:" << endl;
            for (int i = 0; i < 3; i++){
                cout << " " <<food[i] << " $" << price;
            }
        }
};

template <class T>
class Reader_Robot{
    
    T rest;
    
public:
    
    Reader_Robot(T obj){
        this-> rest = obj;
    }
    
    void Read(){
        
        rest.menu();
    }
};
    

int main() {


    Italian_Restaurant Italy;

    Italy.name = "Ceciles ";
    
    Reader_Robot<Italian_Restaurant> ro(Italy);
    
    ro.Read();
    

    Greek_Restaurant Greek;
    
    Greek.name = "Etzels ";
    
    cout << endl;
    
    Reader_Robot<Greek_Restaurant> gro(Greek);
    
    gro.Read();
    
    
    cout << endl;
    
    Chinese_Restaurant Chinese;
    
    Reader_Robot<Chinese_Restaurant> cro(Chinese);
    
    cro.Read();
    
    
    cout << endl;
    return 0;
}
