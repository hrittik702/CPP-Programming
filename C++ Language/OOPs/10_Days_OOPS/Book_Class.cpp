#include <iostream>
using namespace std;

//book class for data retrieval
class Book{
    private :
        string title;
        string author;
        string isbn;
    //constructor
    public :
        Book(string t, string a, string i) : 
        title(t), author(a), isbn(i) {}

        string get_Deatils(){
            return "Title: "+title+" | Author: "+author+" | ISBN: "+isbn;
        }
};

int main(){
    Book myBook("Can we be Strangers Again","Shrijeet Shandilya","978-8-89632-779-0");
    Book b2("Atomic Habits","James Clear","978-1-84-794183-1");
    cout<<"Book Details:"<<endl;
    cout<<myBook.get_Deatils()<<endl;
    cout<<b2.get_Deatils()<<endl;
}