#include "main.h"
#include <unistd.h> // for the write function

int _putchar(char c) {
    return write(1, &c, 1);
}
