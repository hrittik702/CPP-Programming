#include <iostream>
using namespace std;
// class book{
//     private:
//         char name;
//         int price;
//         int pages;
//     public:
//         int countBooks(int x){
//             if(price<x) return 1;
//             else return 0;
//         };
//         bool isBookPresent(char title){
//             if(title == name) return 1;
//             else return 0;
//         }
//         void setName(char n){
//             name = n;
//         }
//         void setPrice(int y){
//             price = y;
//         }
//         void setPage(int v){
//             pages = v;
//         }
// }

int main(){
    class book{
    private:
        char name;
        int price;
        int pages;
    public:
        int countBooks(int x){
            if(price<x) return 1;
            else return 0;
        };
        bool isBookPresent(char title){
            if(title == name) return 1;
            else return 0;
        }
        void setName(char n){
            name = n;
        }
        void setPrice(int y){
            price = y;
        }
        void setPage(int v){
            pages = v;
        }
    }
    book.atomic;
    atomic.setPage;
    atomic.setName;
    atomic.setPrice;

}