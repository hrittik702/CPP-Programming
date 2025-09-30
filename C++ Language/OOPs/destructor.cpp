#include <iostream>
#include <string>
using namespace std;
class Player{
    private:
        string name;
        int health;
        int score;
    public :
        //constructor
        Player(string name, int health, int score){
            this -> name = name;
            this -> health = health;
            this -> score = score;
        }
        //destructor
        ~Player(){
            cout<<"Destructor call hua hai!"<<endl;
        }

};

int main(){
    Player("Hrittik",80,90);
}