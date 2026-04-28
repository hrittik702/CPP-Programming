#include <iostream>
using namespace std;

class car{
    public : 
        string make;
        string model;
        int year;
    
    car(string mak, string mod, int y) : make(mak), model(mod), year(y) {}

    //functions
    public :
        void startEngine() const {
            cout<<year<<" "<<make<<" "<<model<<" engine started !"<<endl;
        } 
};

int main(){
    car c1("Ford","Mustang",1982);
    c1.startEngine();

}