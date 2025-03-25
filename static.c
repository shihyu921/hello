#include <stdio.h>

static void swap(int *a, int *b) {
    *a = *a + *b; // 第一步：將兩個變數相加
    *b = *a - *b; // 第二步：計算新 b 的值
    *a = *a - *b; // 第三步：計算新 a 的值
}

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    
    swap(&x, &y); // 呼叫 swap 函式，傳遞 x 和 y 的地址

    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
