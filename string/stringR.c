#include <stdio.h>
#include<string.h>

int main() {

  char str[100];

 
  printf("Digite uma palavra: ");
  scanf("%s", str);



  // Lê tamanho da string inserida
  int len = strlen(str);

    for (int i = 0, j = len - 1; i < len / 2; i++, j--) // loop para inverter string
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  
  printf("String invertida: %s\n", str);

  return 0;
}
