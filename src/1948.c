#include <stdio.h>

int rec_functio(int a);

int main() {
    int x, res;
    char c;
    res = scanf("%d%c", &x, &c);
    if (res == 2 && c == '\n') {
        printf("%d\n", rec_functio(x));
    } else {
        printf("n/a\n");
    }
    return 0;
}

int rec_functio(int a) {
    if (a < 0) {
        a = -a;
    }
    for (int i = a - 1; i > 0; i--) {
        int res = a;
        while (res > 0) {
            res -= i;
        }
        if (res == 0) {
            int share = 0;
            for (int l = i; l >0; l--) {
                int res_typ = i;
                while (res_typ > 0) {
                    res_typ -= l;
                }
                if (res_typ == 0) {
                    share++;
                }
            }
            if (share == 2)
                return i;
        }
    }
    return 1;
}
