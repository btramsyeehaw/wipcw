#include <stdio.h>
#include <assert.h>
int main()
{
    int n;
    printf("Wpisz liczbę całkowitą: ");
    scanf("%d",&n);
    assert(n>=2);
    int pom = n;

    for (int i=1; i++; i<pom){
        if(pom%i==0){
            printf("%d\n",i);
            pom=pom/i;
            i = 1;
            if(pom==1){
                break;
            }
        }
    }

    
    return 0;
}
