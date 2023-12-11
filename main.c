#include <stdio.h>
#include <stdlib.h>

int8_t numbers[] = {
    9,2,3,4,5
};

/*
int main() {
    printf("Hello, World! the number is: %d \n", numbers[0]);
    return 0;
}
*/

struct cat {
    char *name;
    void (*meow)();
};
struct cat* new_cat(char* name, void (meow)()) {
    struct cat *this = (struct dog *)malloc(sizeof(struct cat));
    this->name = "fido";
    this->meow = meow;

    return this;
}
void meow() { printf("meow\n"); }
void rawr() { printf("rawr\n"); }
int

main(int argc, char** argv) {
    struct cat *floof = new_cat("fido", meow);
    struct cat *captain = new_cat("snoopy", rawr);
    // ...
    captain->meow();      // prints "arf"
    floof->meow();    // prints "woof"
}