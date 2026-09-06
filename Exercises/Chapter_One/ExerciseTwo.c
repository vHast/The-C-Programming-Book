// Find out what happens when printf's argument string contains \c where c is some character not listed above

#include <stdio.h>

int main()
{
    printf("Hello, world\c"); 
}

// There is a warning by GCC compiler, but the program compiles without the newline, it's not there anymore

// Actually, here's what it compiles
// | Hello, worldc
// So the c element is there, but not the \ 
// GCC treats the \ as essentially disappearing and the c remains
