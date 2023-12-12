//
// Created by Colin Nordmark on 2023-12-11.
//
#ifndef CATCALCULATOR_H
#define CATCALCULATOR_H

#include <stdio.h>

#include "renderer.h"
#include "utilities.h"


int8_t someNumber = 21;

int calculateCats() {
    printf("Please enter number of cats: ");

    while (scanf("%d", &someNumber) != 1) {
        delay(250);
        printf(ANSI_RED "FAILED TO READ VALUE \n");
        printf(ANSI_RESET "Please enter a valid cat amount: ");

        int c;
        while ((c = getchar()) != '\n' && c != EOF) { }

    }

    printf("%d", someNumber);
    return 0;
}
#endif //CATCALCULATOR_H
