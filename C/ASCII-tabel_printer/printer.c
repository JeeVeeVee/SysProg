#include <stdio.h>

void print_lijn(int);
void print_titel(void);
void print_ascii_tabel(char, char);

int main(void){
    print_lijn(40);
    print_titel();
    print_ascii_tabel('A', 'z');
}


void print_lijn(int n){
    int i = 0; 
    putchar('\n');
    for(i = 0; i < n; i++){
        putchar('-');
    }
}

void print_titel(void){
    printf("\nDe ASCII-tabel\n");
}

void print_ascii_tabel(char a, char b){
    char c;
    for(c = a; c < b; c++){
        printf("%c : %d\n", c, c);
    }
}

