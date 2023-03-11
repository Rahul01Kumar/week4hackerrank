#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,b,c,d,e;

    scanf("%d", &n);

    a = n%10;
    b = floor((n%100)/10);
    c = floor((n%1000)/100);
    d = floor((n%10000)/1000);
    e = floor(n/10000);

    printf("%d\n", a+b+c+d+e);
    return 0;
}
