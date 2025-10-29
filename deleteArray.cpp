#include <iostream>
using namespace std;
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int k;
  cout << "Enter index : ";
  cin >> k;
  int count = 10;
  ;
  for (int i = k; i < 10; i++) {
    arr[i] = arr[i + 1];
  }
  for (int i = 0; i < 10 - 1; i++) {
    cout << arr[i] << " ";
  }
}
#include <iostream>
using namespace std;
void hllo() { cout << "Hello world\n"; }
