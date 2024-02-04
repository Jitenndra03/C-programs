#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int maximum(int* candies, int Candies, int candiesSize){
    for(int i = 0; i < candiesSize; i++) {
        if(Candies < candies[i])
            return 0;
    }
    return 1;
}

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *p;
    p = (bool *)malloc(candiesSize * sizeof(int));
    if(p == NULL) {
        *returnSize = 0;
        return NULL;
    }
    for(int i = 0; i < candiesSize; i++) {
        int a = maximum(candies, candies[i] + extraCandies, candiesSize);
        *(p + i) = a;
    }
    *returnSize = candiesSize;
    return p;
}

int main() {
    int candies[] = {2, 3, 5, 1, 3};
    int candiesSize = sizeof(candies) / sizeof(candies[0]);
    int extraCandies = 3;
    int returnSize;

    bool *result = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);
    if(result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Kids with maximum candies:\n");
    for(int i = 0; i < returnSize; i++) {
        printf("%s ", result[i] ? "true" : "false");
    }
    printf("\n");

    free(result); 
    return 0;
}