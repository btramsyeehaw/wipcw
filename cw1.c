//cwiczenie 1 z listy 2
int main()
{
    int number;
    int palindrom = 1;
    printf("Wpisz numer: ");
    scanf("%d",&number);
    int h = 0;
    int pom = number;
    while(pom>0){
        pom = pom/10;
        h++;
    }

    int tab[h];
    int p = number;
    for (int i = 0; i<h; i++){
        tab[i] = p % 10;
        p = p/10;
    }
    for (int j = 0; j<(h/2); j++){
        printf("%d, %d\n", tab[j], tab[h-j-1]);
        if (tab[j]!=tab[h-j-1]){
            palindrom = 0;
        }
    }
    if (palindrom==1){
        printf("Liczba %d to palindrom", number);
    }
    else{
        printf("Liczba %d to nie palindrom", number);
    }
    return 0;
}
