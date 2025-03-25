#include <stdio.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t n) {
    uint8_t reversed = 0;
    for (int i = 0; i < 8; i++) {
        // 將 n 的最低位元新增到 reversed 的最高位元上
        reversed <<= 1; // 左移 reversed，為下一位元騰出空間
        reversed |= (n & 1); // 將 n 的最低位元加到 reversed
        n >>= 1; // 右移 n，處理下一位元
    }
    return reversed;
}

int main() {
    uint8_t num = 0b11010010; // 例子：輸入一個數
    uint8_t reversed_num = reverse_bits(num);
    
    printf("Original: %u\n", num);
    printf("Reversed: %u\n", reversed_num);
    
    return 0;
}
