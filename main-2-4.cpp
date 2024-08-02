#include <stdio.h>

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    int test1[] = {1, 2, 3, 4, 5};
    int length1 = 5;
    printf("Test 1: %d\n", sum_min_max(test1, length1)); 

    int test2[] = {5, 5, 5, 5, 5};
    int length2 = 5;
    printf("Test 2: %d\n", sum_min_max(test2, length2)); 

    int test3[] = {};
    int length3 = 0;
    printf("Test 3: %d\n", sum_min_max(test3, length3)); 

    int test4[] = {10, 20, 30, 40, 50};
    int length4 = 5;
    printf("Test 4: %d\n", sum_min_max(test4, length4)); 

    return 0;
}
