//
// Created by Colin Nordmark on 2023-12-11.
//

#include <stdio.h>



int calculateCats() {
    int8_t someNumber = 21;

    if(scanf("%d", &someNumber) != 1) {
        printf("FAILED TO READ VALUE");
        return -1;
    }

    printf("%d",someNumber);
    return 0;
}