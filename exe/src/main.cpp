#include "mymath.h"
#include "mymath2.h"
#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int c = add(a, b);
    int m = mul(a, b);
    using namespace std;
    cout << c << endl;
    cout << m << endl;
    return 0;
}
