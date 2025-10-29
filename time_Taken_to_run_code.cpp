#include <iosteram>
#include <chrono>
using namespace std :: chrono;
using namespace std;
int main(){
    //for starting time
    auto start = high_resolution_clock :: now();

    // -----------
    // -----code to be tested
    // ------------

    //for ending time 
    auto stop = high_resolution_clock :: now();
    auto duration = duration_cast<microseconds>(start-stop);
    cout<<"Time Taken : "<<duration.count()<<" microseconds"<<endl;
    return 0;
}