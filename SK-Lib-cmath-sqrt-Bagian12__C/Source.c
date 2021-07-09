
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    double x = 329.4, hasil;
    hasil = sqrt(x);
    
    if (x < 0) {
        printf("Error: sqrt returns %f\n", hasil);
    } else {
        printf("The square root of %.2f is %.2f\n", x, hasil);
    }
    
    _getch();
    return 0;
}