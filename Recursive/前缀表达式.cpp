#include<iostream>
#include<stdlib.h>
using namespace std;

int get() {
    char i[0];
    cin >> i ;
    switch (i[0]) {
        case '+':
            return get() + get();
        case '-':
            return get() - get();
        case '*':
            return get() * get();
        case '/':
            return get() / get();
        default:
            return atof(i);
        break;
    }
}


int main () {
    printf("%.1f\n", get());
    return 0;
}