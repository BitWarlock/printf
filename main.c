#include "main.h"
#include <stdio.h>

void run_basic_tests() {
    int count = 0;

     count = printf("O Character:[%c]\n", 'H');
    printf("O Length:[%d]\n", count);

    count = _printf("Character:[%c]\n", 'H');
    printf("Length:[%d]\n\n", count);

    count = printf("O String:[%s]\n", "I am a string !");
    printf("O Length:[%d]\n", count);
    
   count = _printf("String:[%s]\n", "I am a string !");
    printf("Length:[%d]\n\n", count);

    count = printf("O Percent:[\%]\n");
    printf("O Length:[%d]\n", count);


    count = _printf("Percent:[\%]\n");
    printf("Length:[%d]\n\n", count);
}

void run_edge_cases() {
    int count;

    count = 0;
    count = _printf("Null Character:[%c]\n", '\0');
    printf("Length:[%d]\n", count);
    
    count = printf("O Null Character:[%c]\n", '\0');
    printf("Length:[%d]\n\n", count);

    count = _printf("Null String:[%s]\n", NULL);
    printf("Length:[%d]\n", count);

    count = printf("O Null String:[%s]\n", NULL);
    printf("Length:[%d]\n\n", count);

    count = _printf("Empty String:[%s]\n", "");
    printf("Length:[%d]\n", count);

    count = printf("O Empty String:[%s]\n", "");
    printf("Length:[%d]\n\n", count);
    
    count = _printf("Empty Character:[%c]\n", '\0');
    printf("Length:[%d]\n", count);
    
    count = printf("O Empty Character:[%c]\n", '\0');
    printf("Length:[%d]\n\n", count);
}

void run_various_format_specifiers() {
    int count;

    count = 0;
    count = _printf("Mix Specifiers:[%d %c %s %%]\n", 42, 'X', "Hello");
    printf("Length:[%d]\n", count);
    count = printf("O Mix Specifiers:[%d %c %s %%]\n", 42, 'X', "Hello");
    printf("O Length:[%d]\n", count);
}

int main(void) {
    run_basic_tests();
    run_edge_cases();
    run_various_format_specifiers();

    return (0);
}

