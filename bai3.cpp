#include <stdio.h>
#include <string.h>
int main() {
    char matKhau[20], matKhauDau[20] = "123456";

    printf("Nhap mat khau: ");
    scanf("%s", matKhau);

    if (strcmp(matKhau, matKhauDau) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
