#include<iostream>

using namespace std;

int Febo(int num) {
        if(num == 1) return 1;
        if(num == 2) return 1;
        else {
            return Febo(num - 2) + Febo(num - 1);
        }
    }

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num ;
        cout << Febo(num) << endl;
    }
    return 0;
}