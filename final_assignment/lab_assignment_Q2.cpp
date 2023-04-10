/* Question 2: imagine a publishing company that markets both book and audiocassette
versions of its works. Create a class publication that stores the title (a
string) and price (type float) of a publication. From this class derive two
classes: book, which adds a page count (type int), and tape, which adds a
playing time in minutes (type float). Each of these three classes should
have a getData() function to get its data from the user at the keyboard, and
a putData() function to display its data.
Write a main program to test the book and tape classes by creating
instances of them, asking the user to fill in data with getData(), and then
displaying the data with putData().*/
#include<bits/stdc++.h>
using namespace std;
class Publication {
  public:
    string title;
    float price;
    void get_data(string s,float p) {
        title = s;
        price =p;

    }
    void put_data() {
        cout<<"Title :"<<title <<endl;
        cout<<"Price :"<<price<<endl;

    }

};
class Book:public Publication {
  public:
    int page_count;
    void get_data(string s,float p) {
        title = s;
        page_count =p;

    }
    void put_data() {
        cout<<"In book class  ";
        cout<<"Title :"<<title <<endl;
        cout<<"page_count :"<<page_count<<endl;

    }

};
class Tape:public Publication {

  public:
    float playing_time;
    void get_data(string s,float p) {
        title = s;
        playing_time= p;


    }
    void put_data() {
        cout<<"In tape class  ";
        cout<<"Title :"<<title<<endl;
        cout<<"playing time "<<playing_time;

    }
};
int main() {
    string title;
    int page_count;
    float playing_time;
    Book obj1;
    Tape obj2;
    cout<<"Input book title and page number"<<endl;
    cin>>title;
    cin>>page_count;
    obj1.get_data(title,page_count);
    obj1.put_data();

    cout<<"input audiocassette name and playing time"<<endl;
    cin>>title;
    cin>>playing_time;

    obj2.get_data(title,playing_time);
    obj2.put_data();



    return 0;

}
