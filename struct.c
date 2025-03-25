#include <stdio.h>

struct String {
    char *str;
    int length;
};

// 函式來計算字串長度
int calculateLength(struct String s) {
    int len = 0;
    while (*s.str != '\0') {
        len++;
        s.str++;
    }
    return len;
}

int main() {
    struct String myString;
    myString.str = "Hello, World!";
    
    int length = calculateLength(myString);
    printf("字串的長度是: %d\n", length);
    return 0;
}
