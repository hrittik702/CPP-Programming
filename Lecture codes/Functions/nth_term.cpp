#include <iostream>
using namespace std;
//menu of program
void menu(){
        cout<<"------- Arithmetic Progression ----------"<<endl;
        cout<<"1. Find nth term"<<endl;
        cout<<"2. Give me term, i give nth pos."<<endl;
        cout<<"3. Exit"<<endl;
        cout<<endl;
    }

//nth_term
int nth_term(int a, int d, int n){
    return (a+(n-1)*d);
}

void nth_pos() {
    int a, d, term;
    cout << "Enter first term : ";
    cin >> a;
    cout << "Enter common difference : ";
    cin >> d;
    cout << "Enter the term you want to find position for : ";
    cin >> term;

    if ((term - a) % d == 0) {
        int n = ((term - a) / d) + 1;
        cout << term << " is at position " << n << endl;
    } else {
        cout << term << " is not in the given AP\n";
    }
}

int main(){
    while (true){
    menu();
    int choice;
    cout<<"Enter your choice : ";
    cin>>choice;
    //for calling functions
    if(choice==1) {
        int a,n,d;
        cout<<"Enter first term : ";
        cin>>a;
        cout<<"Enter common difference : ";
        cin>>d;
        cout<<"Enter n : ";
        cin>>n;
        cout<<n<<"th term is "<<nth_term(a,d,n)<<endl;
        cout<<endl;
    }
    if(choice==2) nth_pos();
    if(choice==3) break;
}
}

