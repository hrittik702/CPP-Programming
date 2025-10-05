#include <iostream>
#include <string>
using namespace std;
class Player{
    public :
        string name;
        int health;
        int score;
    public :
        //constructor
        // Player(string name, int health, int score){};

        //setter
        void setName(string name){
            this -> name = name;
        }
        void setHealth(int health){
            this -> health = health;
        }
        void setScore(int score){
            this -> score = score;
        }
        //destructor
        ~Player(){
            cout<<"object destroyed"<<endl;
        }
};

int main(){
    Player p1;
    p1.setName("Hrittik");
    p1.setHealth(80);
    p1.setScore(90);
    Player p3;
    Player p2 = p1;  //deep copy by using copy constructor
    p3 = p2;
    cout<<"p3 : "<<p3.name<<endl;
    cout<<"p2 : "<<p2.name<<endl;
    cout<<p2.score<<endl;
    p1.setName("Gargi");
    cout<<p2.name<<endl;
    cout<<p1.name<<endl;
    cout<<"p3 : "<<p3.name<<endl;
}