#include <stdio.h>
#define DIGITS_TO_REMOVE 3 // Assumed to be positive
#define INPUT_SIZE 5 // Assumed to be greater than DIGITS_TO_REMOVE
void recurse(int* input, int* output, int begin, int end){
    int i;
    int min = begin;
for (i = begin; i < end; ++i){
        if (input[min] > input[i]){
            min = i;
        }
    }
    output[end - DIGITS_TO_REMOVE - 1] = input[min];
if (end < INPUT_SIZE){
     recurse(input, output, min + 1, end + 1);
    }
}int main(void) {
    int foo[] = { 2, 4, 6, 3, 5 };
    int bar[INPUT_SIZE - DIGITS_TO_REMOVE];
    int i;
recurse(foo, bar, 0, DIGITS_TO_REMOVE + 1);
for (int i = 0; i < INPUT_SIZE - DIGITS_TO_REMOVE; ++i){
        printf("%d", bar[i]);
    }
    return 0;
}
