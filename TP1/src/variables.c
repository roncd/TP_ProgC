#include <stdio.h>
#include <string.h>

int main() {

signed char sc = 12;
unsigned char uc = 20;

short s = -31923;
unsigned short us = 19229;

int i = 2922;
unsigned int ui = 65535;

long int li = 2147483647;
unsigned long int uli = 4294967295;

long long int lli = -9223372036854775807;
unsigned long long int ulli =18446744;

float f = 1.44;
double d = 13.233;
long double ld = 1232.233;

printf("var char signed :%hhd", sc);
printf("\nvar char unsigned : %hhu", uc);

printf("\nvar short : %hd", s);
printf("\nvar short unsigned : %hu", us);

printf("\nvar int : %d", i);
printf("\nvar int unsigned : %u", ui);

printf("\nvar long int : %ld", li);
printf("\nvar long int unsigned : %lu", uli);

printf("\nvar long long int : %lld", lli);
printf("\nvar long long int unsigned : %llu", ulli);

printf("\nvar float : %f", f);
printf("\nvar double : %f", d);
printf("\nvar long double : %Lf", ld);

}