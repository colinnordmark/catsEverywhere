//
// Created by Colin Nordmark on 2023-12-12.
//

#ifndef RENDERER_H
#define RENDERER_H
#define ANSI_RED "\x1b[31m"
#define ANSI_GREEN "\x1b[32m"
#define ANSI_YELLOW "\x1b[33m"
#define ANSI_BLUE "\x1b[34m"
#define ANSI_MAGENTA "\x1b[35m"
#define ANSI_CYAN "\x1b[36m"
#define ANSI_RESET "\x1b[0m"
#define ANSI_BOLD_BLUE "\e[1;34m"
#define CONSOLE_CLEAR "\e[1;1H\e[2J"


#include <stdio.h>

enum Menus {
    MAIN = 1,
    CALCULATOR = 2,
    MEOWER = 3
};

char* mainOptions[] = {
    "Calculator",
    "Meow simulator",
    "Cat creator (WIP)",
    ANSI_RED "EXIT" ANSI_RESET
};

void renderLine() {
    printf("----------------------------/ \n");
}

void printOptions(char* options[], int size, int cursor) {
    for (int i = 0; i < size; i++) {
        if (cursor == i) {
            printf(ANSI_BOLD_BLUE "> " ANSI_RESET);
        }
        printf(ANSI_RESET "%s\n", options[i]);
    }
}

int renderCatAppMain(int* cursor) {
    printf("Render output: \n");

    printf("Cat application v0.1 \n");
    renderLine();
    printf(ANSI_BLUE "Use arrowkeys to navigate application \n");
    printOptions(mainOptions, sizeof(mainOptions) / sizeof(mainOptions[1]), *cursor);
    return 0;
}

#endif //RENDERER_H

