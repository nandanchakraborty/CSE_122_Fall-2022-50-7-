/*Question 1 :  1. Declare and define an animal base class:
 animal stores an age (int), a unique long ID (a boolean that is
true if it is alive, and a location (a pair of double).
 animal requires a default constructor and a 3 parameter
constructor. Both constructors should set the unique ID
automatically. They should also set the alive boolean to true.
The three parameter constructor should accept an int for the
age and two doubles for the set of coordinates. The default
should set these three values to 0.
 animal requires a virtual move method which accepts two
doubles that represent two coordinates, and ‘moves’ the
animal to the set of coordinates.
 animal requires a copy constructor and a virtual destructor.
The destructor should be virtual.
 animal requires a virtual sleep method and a virtual eat
method. Both methods return void. Both methods should print
an appropriate message to cout.
 animal requires a setAlive function which accepts a boolean.
This is a void function that changes the alive data member to
the value of the boolean that is passed in.*/


#include<iostream>
#include<utility>
using namespace std;
class Animal {
  public:
    int age;
    long int unique_id;
    bool alive;
    pair<double,double> location;

  public:
    Animal() {
        age = 0;
        alive = true;
        unique_id=24857;
        location.first = 0;
        location.second =0;

    }

    Animal(int a,double b,double c) {
        age =a;
        location.first = b;
        location.second =c;
        unique_id =45581;

    }
    virtual void moves(double x,double y) {
    /*
        location.first = x;
        location.second =y;
        cout<<"The animal moving towards "<< location.first <<" "<<location.second<<endl;*/

    }
    Animal(Animal &obj) {} //copy constructor


    virtual void sleep() {
        cout<<"The animal is sleeping "<<endl;
    }
    virtual void eat() {
        cout<<"The animal is eating"<<endl;

    }
    void setAlive(bool x) {
        alive =x;
    }

    virtual  ~Animal() {}  //desrtructor


};
class animal:public Animal {
  public:
    virtual void moves(double x,double y) {

        location.first = x;
        location.second =y;
        cout<<"The animal moving towards "<< location.first <<"  "<<location.second<<endl;

    }
    virtual void sleep() {
        cout<<"The animal is sleeping  "<<endl;
    }
    virtual void eat() {
        cout<<"The animal is eating"<<endl;

    }



};
int main() {


    animal obj1;
    Animal *obj = &obj1;
    Animal(3,2.5,3.5);
    obj->moves(2.5,3.5);
    obj->eat();
    obj->sleep();


}
