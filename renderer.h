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

#include <stdio.h>
enum Menus {
    MAIN = 1,
    CALCULATOR = 2,
    MEOWER = 3
};

char *mainOptions[] = {
    "Option 1",
    "Option 2",
    "Option 3",
    "Option 4"
};

void renderLine() {
    printf("----------------------------/ \n");
}

void printOptions(char *options[]) {
    for(int i = 0; i < sizeof(options); i++) {
        printf(ANSI_RESET "%s\n", options[i]);
    }
}

int renderCatAppMain() {
    printf("Render output: \n");

    printf("Cat application v0.1 \n");
    renderLine();
    printf(ANSI_BLUE "Use arrowkeys to navigate application \n");
    printOptions(mainOptions);
    return 1;
}

#endif //RENDERER_H
