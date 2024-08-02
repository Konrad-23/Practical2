#include <stdio.h>

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int test1[] = {1, 2, 3, 2, 1};
    int length1 = 5;
    printf("Test 1: %d\n", sum_if_palindrome(test1, length1)); 

    int test2[] = {1, 2, 3, 4, 5};
    int length2 = 5;
    printf("Test 2: %d\n", sum_if_palindrome(test2, length2)); 

    int test3[] = {};
    int length3 = 0;
    printf("Test 3: %d\n", sum_if_palindrome(test3, length3)); 

    int test4[] = {1, 2, 2, 1};
    int length4 = 4;
    printf("Test 4: %d\n", sum_if_palindrome(test4, length4)); 

    return 0;
}
