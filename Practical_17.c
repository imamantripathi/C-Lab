#include <stdio.h>

void funA();

void funB();

void funC();

void funD();

void main()

{

    printf("Hey from main function\n");

    funA();
}

void funA()

{

    printf("Hey from function A \n");

    funB();
}

void funB()

{

    printf("Hey from function B \n");

    funC();
}

void funC()

{

    printf("Hey from function C \n");

    funD();
}

void funD()

{

    printf("Hey from function D \n");
}

/*

OUTPUT:

Hey from main function

Hey from function A

Hey from function B

Hey from function C

Hey from function D

*/