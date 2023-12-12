//
// Created by Colin Nordmark on 2023-12-11.
//
#ifndef CATCALCULATOR_H
#define CATCALCULATOR_H

#include <stdio.h>



int calculateCats() {
    int8_t someNumber = 21;

    printf("Please enter number of cats: ");
    if(scanf("%d", &someNumber) != 1) {
        printf("FAILED TO READ VALUE");
        return -1;
    }

    printf("%d",someNumber);
    return 0;
}
#endif //CATCALCULATOR_H
