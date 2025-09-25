#include <iostream>
using namespace std;
//creating objects
class player {
    private:
        int health;
        int age;
    public :
        //setter
        void setHealth(int health){
            this->health=health;
        }
        void setAge(int age){
            this->age=age;
        }
        //getter
        int getHealth(){
            return health;
        }
        int getAge(){
            return age;
        }
};

int add(int a, int b){
    return a+b;
}
int main(){
    player hrittik;
    player abhishek;
    hrittik.setHealth(80);
    abhishek.setHealth(90);
    hrittik.setAge(23);
    abhishek.setAge(21);
    cout<<add(hrittik.getHealth(),abhishek.getHealth())<<endl; //170
    cout<<add(hrittik.getAge(),abhishek.getAge())<<endl;  //44

}