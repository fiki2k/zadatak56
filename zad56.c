// Program ce izracunat povrsinu trokuta pomocu funkcije.

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
  
float povrsina(float a, float b, float c)
{
    // Duljina stranica mora biti pozitivna i suma od bilo koje dvije stranice
    // mora biti manja od trece stranice.
    if (a < 0 || b < 0 || c <0 || (a+b <= c) ||
        a+c <=b || b+c <=a)
    {
        printf("Nije valjan trokut");
        exit(0);
    }
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
  
int main()
{
    float a,b,c;
    printf("unesi duljine stranica:");
    scanf("%f %f %f",&a,&b,&c);
  
    printf("Povrsina je %f", povrsina(a, b, c));
    return 0;
}
