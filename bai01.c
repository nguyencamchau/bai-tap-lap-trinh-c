#include <stdio.h>
int main(void) {
    char name[50];
    printf("Nhap ten cua ban: ");
    if (scanf("%49s", name) != 1) {
        return 1;
    }
    printf("Xin chao %s!\n", name);
    return 0;
}
