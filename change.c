#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("原始值: a = %d, b = %d\n", a, b);

    // 使用異或運算子來交換
    a = a ^ b;  // 第一步：a 現在是 a 和 b 的異或結果
    b = a ^ b;  // 第二步：b 現在是原始的 a
    a = a ^ b;  // 第三步：a 現在是原始的 b

    printf("交換後: a = %d, b = %d\n", a, b);
    return 0;
}
