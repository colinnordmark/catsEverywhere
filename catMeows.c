#include <stdio.h>
#include <stdlib.h>
//
// Created by Colin Nordmark on 2023-12-11.
//
struct cat {
    char *name;
    void (*meow)();
};
struct cat* new_cat(char* name, void (meow)()) {
    struct cat *this = (struct cat *)malloc(sizeof(struct cat));
    this->name = "Default name";
    this->meow = meow;

    return this;
}
void meow() { printf("meow\n"); }
void rawr() { printf("rawr\n"); }
int

runMeow(int argc, char** argv) {
    struct cat *floof = new_cat("floof", meow);
    struct cat *captain = new_cat("captain", rawr);
    // ...
    captain->meow();      // prints "arf"
    floof->meow();    // prints "woof"
}