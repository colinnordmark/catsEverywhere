#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "catCalculator.h"
#include "renderer.h"

int8_t numbers[] = {
    9, 2, 3, 4, 5
};


int main() {
    bool run = true;
    int cursor = 1;

    renderCatAppMain(&cursor);
    //calculateCats();
    return 0;
}
