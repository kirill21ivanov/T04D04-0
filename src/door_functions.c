#include <stdio.h>
#include <stdio.h>
double an(double x) {
    double a = pow(1, 3)/pow(1, 2) + pow(x, 2);
    return a;
}
double ber(double x) {
    double a = pow((pow(1,4)+4 * pow(x, 2) * pow(1, 2)), 0,5);
    double b = pow(a - (x, 2) - pow(1, 2), 0,5);
    return b;
}
double jip(double x) {
    double a = 1 / pow(x, 2);
    return a;
}
int main() {
    double Pi = 3.14159265358979323846;
    double p, a, b, g;
    for (int i = 0; i < 42; i++) {
        p = (i * 2 * Pi) / 41 - Pi;
        a = an(p);
        b = ber(p);
        g = gip(p);
        if (b==b) {
            printf("%.7f | %.7f | %.7f | %.7f \n", p, a, b, g);
        } else {
            printf("%.7f | %.7f | - | %.7f \n", p, a,  g);
        }
    }
    getchar();
    return 0;
}
