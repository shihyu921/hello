#include <stdio.h>

// 計算字串長度的函式
int string_length(const char *str) {
    int length = 0;
    while (*str != '\0') {  // 繼續迭代直到遇到空字元
        length++;          // 每次增加一個計數
        str++;            // 移動到字串的下一個字元
    }
    return length;        // 返回字串的長度
}

int main() {
    const char *testString = "Hello, World!";
    int length = string_length(testString);
    printf("The length of the string \"%s\" is %d.\n", testString, length);
    return 0;
}
