#include <stdio.h>
#include <string.h>

typedef struct{
    /* data */
    char naam[30];
    short leeftijd;
    char code;
} persoon;

void print_persoon(persoon p){
    printf("Naam : %s\nLeeftijd : %d\nCode : %c\n", p.naam, p.leeftijd, p.code);
}

int main(void){
    persoon p1;
    p1.leeftijd = 30;
    p1.leeftijd = 'A';

    persoon p2={"Jan Jansens", 30, 'A'};
    print_persoon(p2);
}



