#include <iostream>

using namespace std;

int main() {

    int n = 1;
    int m = 2;
    int *a = &n;
    int *b = &m;
    cout << *a << " " << *b << endl;
    a = b;
    cout << *a << " " << *b << endl;
    *a = 3;
    cout << *a << " " << *b << endl;

    return 0;
}