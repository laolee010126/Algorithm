#include<iostream>

using namespace std;

int Move(char start, char to) {
    cout << start << "->" << to << endl;
    return 0;
}

int Hanoi(int N, char start, char to, char via) {
    if(N == 1) {
        Move(start, to);
    } else{
        Hanoi(N-1, start, via, to);
        Move(start, to);
        Hanoi(N-1, via, to, start);
    }
}

int main() {
    int n;
    cin >> n;
    Hanoi(n, 'A', 'C', 'B');
    return 0;
}