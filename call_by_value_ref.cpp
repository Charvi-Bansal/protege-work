// call_by_value_ref.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
void by_value(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
}
void by_ref(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a, b;
    printf("Enter two integers:");
    scanf("%d %d", &a, &b);
    printf("\nValues of a and b before call by value:%d  %d", a, b);
    by_value(a, b);
    printf("\nValues of a and b after call by value:%d  %d", a, b);
    printf("\nValues before calling call by reference:%d  %d", a, b);
    by_ref(&a, &b);
    printf("\nValues after calling call by reference:%d  %d\n", a, b);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
