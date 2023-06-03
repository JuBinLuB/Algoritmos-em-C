#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // >>>>>>>> sizeof of Types <<<<<<<<
    printf("sizeof(int) = %lld\n", sizeof(int));
    printf("sizeof(short) = %lld\n", sizeof(short));
    printf("sizeof(long) = %lld\n", sizeof(long));
    printf("sizeof(float) = %lld\n", sizeof(float));
    printf("sizeof(double) = %lld\n\n", sizeof(double));

    printf("sizeof(int*) = %lld\n", sizeof(int *));
    printf("sizeof(int **) = %lld\n", sizeof(int **));
    printf("sizeof(int ***) = %lld\n", sizeof(int ***));
    printf("sizeof(float *) = %lld\n", sizeof(float *));
    printf("sizeof(double *) = %lld\n", sizeof(double *));

    // >>>>>>>> POINTERS AND POINTERS OF POINTERS <<<<<<<<
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

    **p2 = 99;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

    printf("*&a = %d\n", *&a);  // *(&a) = 10.
    printf("*p1 = %d\n", *p1);  // *p1 = *(&a) = 10
    printf("**&p1 = %d\n", **&p1);  // **(&p1) = *p1 = *(&a) = 10.
    printf("***&p2 = %d\n", ***&p2);    // ***(&p2) = **p2 = **(&p1) = *(&a) = 10.

    // >>>>>>>> OPERATIONS WITH POINTERS <<<<<<<<
    int a, b, *p1, *p2;

    a = 4;
    b = 3;
    p1 = &a;
    p2 = p1;
    *p2 = *p1 + 3; b = b * (*p1); (*p2)++;
    p1 = &b;

    printf("p1 = %p, *p1 = %d | p2 = %p, *p2 = %d\n", p1, *p1, p2, *p2);
    printf("&a = %p, a = %d | &b = %p, b = %d\n", &a, a, &b, b);

    return 0;
}
