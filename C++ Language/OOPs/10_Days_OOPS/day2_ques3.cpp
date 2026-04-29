#include <iostream>
using namespace std;

//destructor 
//The Destructor (~Classname) is a special member function that is automatically 
//called when an object’s lifetime ends, which occurs when it goes out of scope 
//(as seen in scope_test() and main()):

//Its primary purpose is cleanup. It ensures that any dynamically allocated 
//memory or external resources (files, network connections, etc.) are properly 
//cleaned up when the object is no longer needed.
//This is fundamental to C++’s powerful RAII (Resource Acquisition Is Initialization) 
//paradigm, which prevents memory leaks and resource exhaustion by tying resource lifetime 
//to object lifetime.


class Resource{
    private :
        string id;
    public :
        //constructor
        Resource(string i) : id(i) {
            cout<<"Resource ["<<id<<"] accquired!"<<endl;
        }
        //destructor
        ~Resource() {
            cout<<"Resource ["<<id<<"] released!"<<endl;
        }

        //scope test
        void scope_test(){
            cout<<"---------- Entering scope Test ---------"<<endl;
            Resource local_res("Local A");
            cout<<"---------- Exiting scope Test ----------"<<endl;
        }
};

int main(){
    Resource r1("hrittik");
    r1.scope_test();
}