#include <iostream>
using namespace std;

int sum(int x) {
    int s = 0;
    while (x > 0) {
        s+=(x%10);
        x/=10;
    }
    return s;
}

int main() {
    int n, a, b, total=0;
    cin >> n >> a >> b;
    for (int i=1; i<=n; i++) {
        if (a<=sum(i) and sum(i)<=b) {
            total+=i;
        }
    }
    cout << total;
    return 0;
}
