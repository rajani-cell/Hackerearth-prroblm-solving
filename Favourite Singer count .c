//Favourite Singer



#include <stdio.h>

int main() {
    int n = 5;
    int a[5] = {1, 2, 2, 2, 4};

    int singer_num = 0;

    for (int i = 0; i < n - 1; i++) {
        int count = 0;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        if (count > 0) {
            singer_num++;
        }
    }

    printf("%d", singer_num);

    return 0;
}
