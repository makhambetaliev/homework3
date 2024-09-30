#include <iostream>
using namespace std;

int main() {
    int n, x, ans=1;
    cin >> n >> x;
    n-=2;
    while (n>0) {
        n-=x;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
