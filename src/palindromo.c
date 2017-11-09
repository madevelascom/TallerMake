#include <espalindromo.h>
#include <stdio.h>

int main() {
  // call a function in another file
  int flag;
  char cadena[256];
  printf("Escribe una cadena para verificar si es palindromo: ");
  scanf("%s", cadena);
  flag = esPalindromo(cadena);
  if (flag == 1)
  {
    printf("Es palindromo!\n");
  }
  else 
  {
    printf("No es palindromo!\n");
  }
  return(0);
}

