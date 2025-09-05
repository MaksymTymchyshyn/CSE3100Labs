#include <stdio.h>

double main(void) {
    double x = 0;
    double total = 0;
    double average = 0;
    double count = 0;

while (scanf("%lf", &x) == 1) { // pay attention to %lf
    total += x;
    count += 1;
    average = total/count;
    
    printf("Total=%f Average=%f\n", total, average); // pay attention to %f
};
return 0;

}