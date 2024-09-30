#include <iostream>
using namespace std;

int main() {
    int n, a=0;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j=1; j<=i; j++) {
            cout << j;
        }
        for (int j=0; j<a; j++) {
            cout << ' ';
        }
        for (int j=i; j>=1; j--) {
            cout << j;
        }
        cout << endl;
        a+=2;
    }
    return 0;
}
