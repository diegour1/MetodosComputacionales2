#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf\n", a, b, c, d, e);
    cout << "a " << sizeof(a) << " b" << sizeof(b) << " c" << sizeof(c) << " d" << sizeof(d) << " e" << sizeof(e);
    return 0;
}


