#include <iostream>
#include <string>
using namespace std;

//there are four classes of pubg
//1. Player
//2. Gun
//3. Helmet
//4. Bag

//class Gun
class Gun{
    private :
        int ammo;
        int scope;
        int damage;
    private :
        //setter
        void setAmmo(int ammo) {
            this->ammo = ammo;
        }
        void setScope(int scope) {
            this->scope = scope;
        }
        void setDamage(int damage) {
            this->damage = damage;
        }
        //getter
        int getAmmo(){
            return ammo;
        }
        int getScope(){
            return scope;
        }
        int getDamage(){
            return damage;
        }
};

class Player{
    private :
        int age;
        int score;
        int health;
        Gun gun;
    public :
        //constructor
        Player(int age, int score, int health, Gun gun){
            this->age=age;
            this->score=score;
            this->health=health;
            this->gun=gun;
        }

        //setter
        void setAge(int age){
            this->age = age;
        }
        void setScore(int score){
            this->score = score;
        }
        void setHealth(int health){
            this->health = health;
        }
        void setGun(Gun gun){
            this->gun = gun;
        }
        //getter
        int getAge(){
            return age;
        }
        int getScore(){
            return score;
        }
        int getHealth(){
            return health;
        }
        Gun getGun(){
            return gun;
        }
        //info
        void getInfo(){
            cout<<age<<endl;
            cout<<score<<endl;
            cout<<health<<endl;
            // cout<<gun.<<endl;
        }

};
//execution part
int main(){
    Gun akm;
    Player hrittik(23,78,96,akm);
    hrittik.getInfo();

}
