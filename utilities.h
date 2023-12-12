//
// Created by Colin Nordmark on 2023-12-12.
//

#ifndef UTILITIES_H
#define UTILITIES_H
#include<time.h>

void delay(int milliseconds){

    int delayAmount = 1000 * milliseconds;

    clock_t startTime = clock();

    while(clock() < (startTime + delayAmount));

}
#endif //UTILITIES_H
