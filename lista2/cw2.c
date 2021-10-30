#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Wpisz numer: ");
    scanf("%d",&n);
    int p = 0;
    int i = 1;
    int pierwszosc = 1;
    while (p<n){
        i++;
        for (int j=2;j<=sqrt(i); j++){
            if (i%j==0){
                pierwszosc = 0;
                break;
            }
        }
        if (pierwszosc == 1){
            p++;
            printf("%d\n",i);
        }
        pierwszosc = 1;
    }
    return 0;
}
