//
// Created by Colin Nordmark on 2023-12-12.
//

#ifndef UTILITIES_H
#define UTILITIES_H
#include<time.h>

void delay(int second){

    int milsec = 1000 * 1000 * second;

    clock_t startTime = clock();

    while(clock() < (startTime + milsec));

}
#endif //UTILITIES_H
