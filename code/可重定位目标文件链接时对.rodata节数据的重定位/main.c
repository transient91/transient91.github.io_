/* main.c */
#include<stdio.h>
int a[4] = { -1,-2,3,4 };
extern int val;
int sum();
int main() {
    val = sum();
    printf("sum=%d\n", val);
}