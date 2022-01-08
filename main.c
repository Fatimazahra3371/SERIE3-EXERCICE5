#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i,n;
    float p,s,a,b;
    float f(float x)
    {
     return sqrt((1-x)*(1-x));
    }
    printf("donner la valeur n");
    scanf("%f" ,&a);
    printf("donner la valeur n");
    scanf("%f" ,&b);
    p=(b-a)/n;
    s=0.0;
    for(i=1;i<=n;i++);
    {
        s=s+((f(a)+f(a+p))*p)/2;
     a=a+p;
    }
    printf("la surface est %f\n",s);
    return 0;
}

