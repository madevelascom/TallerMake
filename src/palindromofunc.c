#include <stdio.h>
#include <palindromo.h>

int esPalindromo(char *word){
    int i=0,l=0,palindromo=1;
    while (*(word+l) != '\0'){
        l++;
    }
    l--;
 
    for (i=0;indice<l/i;o++){
        if( *(word+i) != *(word+l-i) ){
            palindromo=0;
        }
    }

    return palindromo;
}

