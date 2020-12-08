#include<iostream>

using namespace std;

int m;
int p = 0;
int cnt = 0;

int get(int n, int k) {
    if(p == n) return n * (n + cnt) + k;
    m = n * (n + cnt) + k;
    if(p != 0) {
        for(int i = 0; i < p; i++) {
            m = m / 3 * 2;
        }
    }
    if(m % n == k) {
        p++;
        get(n, k);
    } else {
        cnt++;
        p = 0;
        get(n, k);
    }



    
}
int main() {
    int n, k;
    cin >> n >> k;
    cout << get(n, k);
    return 0;
}