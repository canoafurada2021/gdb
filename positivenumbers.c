#include <stdio.h>
 
int main() {
   
    double n;
    int valores = 0;

    for (int i = 0; i < 6; ++i)
    {
        scanf("%lf", &n);
        if(n > 0)
            valores++;
    }

    printf("%i valores positivos\n", valores);
 
    return 0;
}
