/*Question 3: Demonstrate a C++ code that creates a class called Fraction. The class

Fraction has two attributes: numerator and denominator.
• In your constructor (inyour__init__ method), verify(assert?) that the
numerator and denominator passed in during initiation are both of type int.
If you want to be thorough, also check to make sure that the denominator is
not zero.
• Write a .reduce() method that will reduce a fraction to lowest terms.
• Override the Object class’s __str__ and __repl__ methods so that your
objects will print out nicely. Remember that__str__ is more for humans;
__repl__ is more for programmers. Ideally ,the__repl__ method will
produce a string that you can run through the eval() function to clone the
original fraction object.
• Override the + operator. In your code, this means that you will implement
the special method __add__. The signature of the __add__ function will be
def __add__(self, other): , and you’ll return a new Fraction with the result
of the addition. Run your new Fraction through the reduce() function before
returning.*/
#include<bits/stdc++.h>
using namespace std;
class Fraction {
  public :
    int   numeretor,denominator;
    void set_data(int  a,int  b) {
        numeretor= a;
        denominator = b;
        cout<<"numerator :"<<numeretor<<endl;
        cout<<"denominator :"<<denominator<<endl;

    }
    Fraction() {
        numeretor;
        denominator;

        assert(numeretor ==(int)numeretor && denominator ==(int)denominator && denominator != 0);


    }
    int reduce() {
        int denom;
        denom = gcd(numeretor,denominator);
        numeretor/=denom;
        denominator/=denom;
        cout<<"lowest fraction " <<numeretor<<"/"<<denominator<<endl;
    }

    string str() {
        return to_string(numeretor) + ", " + std::to_string(denominator) + ")";

    }
    string repr() {
        return to_string(numeretor) + ", " + std::to_string(denominator) + ")";


    }
    void  _operator(int a,int b)  {
int      other_numeretor = a;
 int     other_denominator = b;
        int n = numeretor * other_denominator + other_numeretor * denominator;
        int d = denominator * other_denominator;

        cout<<"After + operation the fraction is  "<<n<<"/"<<d;
    }





};
int main() {
    Fraction  f1;
    f1.set_data(5,15);
    f1.reduce();
    f1.str();
    f1._operator(2,6);
    return 0;


}
