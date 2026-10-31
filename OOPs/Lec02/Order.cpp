#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

    public:

    Customer(string name)
    {
        this -> name = name;
        // this->data = nullptr; // isko isliye diye hai ki pointer ko surachit karne ke liye.
        cout<<"customer is "<<name<<endl;
    }

    ~Customer()
    {
        cout<<"Destructor is"<<name<<endl;
    }
};

int main()
{
    Customer A1("1"),A2("2"),A3("3");
    return 0;
}