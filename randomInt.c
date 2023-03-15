#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    // Seed the random number generator with the current time
    srand(time(NULL));
    
    // Generate a random integer between 1 and 6
    n = rand() % 6 + 1;
    printf("Random number between 1 and 6: %d\n", n);
    
    // Generate a random integer between 100 and 1000
    n = rand() % 901 + 100;
    printf("Random number between 100 and 1000: %d\n", n);
    
    // Generate a random integer between 0 and 19
    n = rand() % 20;
    printf("Random number between 0 and 19: %d\n", n);
    
    // Generate a random integer between 1000 and 2222
    n = rand() % 1223 + 1000;
    printf("Random number between 1000 and 2222: %d\n", n);
    
    // Generate a random integer between -1 and 1
    n = rand() % 3 - 1;
    printf("Random number between -1 and 1: %d\n", n);
    
    // Generate a random integer between -3 and 11
    n = rand() % 15 - 3;
    printf("Random number between -3 and 11: %d\n", n);
    
    return 0;
}
