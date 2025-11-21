#include <stdio.h>
#include <string.h>

int main() {
printf("char signed : %zu octets\n", sizeof(signed char));
printf("char unsigned : %zu octets\n", sizeof(unsigned char));

printf("short signed : %zu octets\n", sizeof(signed short));
printf("short unsigned : %zu octets\n", sizeof(unsigned short));

printf("int signed : %zu octets\n", sizeof(signed int));
printf("int unsigned : %zu octets\n", sizeof(unsigned int));

printf("long int signed : %zu octets\n", sizeof(signed long int));
printf("long int unsigned : %zu octets\n", sizeof(unsigned long int));

printf("long long int signed : %zu octets\n", sizeof(signed long long int));
printf("long long int unsigned : %zu octets\n", sizeof(unsigned long long int));

printf("float : %zu octets\n", sizeof(float)); //pas version signed/unsigned
printf("double : %zu octets\n", sizeof(double));//pas version signed/unsigned
printf("long double : %zu octets\n", sizeof(long double));//pas version signed/unsigned

}