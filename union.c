#include <stdio.h>

union Swap {
    int num[2];  // 用於儲存兩個整數
};

// 使用異或運運算元來交換
void swap(int *a, int *b) {
    *a = *a ^ *b; // 第一步：a 現在是 a 和 b 的異或結果
    *b = *a ^ *b; // 第二步：b 現在是原始的 a
    *a = *a ^ *b; // 第三步：a 現在是原始的 b
}

int main() {
    union Swap numbers;
    numbers.num[0] = 5;
    numbers.num[1] = 10;

    printf("原始值: a = %d, b = %d\n", numbers.num[0], numbers.num[1]);
    
    swap(&numbers.num[0], &numbers.num[1]);

    printf("交換後: a = %d, b = %d\n", numbers.num[0], numbers.num[1]);
    return 0;
}
