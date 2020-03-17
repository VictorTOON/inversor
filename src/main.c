/* Data de submissao:
 * Nome:
 * RA:
 */

#include <stdio.h>
#include <string.h>
const int tam_buffer=100;

int main() {
  int inicio = 0;
  int inicio_auxiliar = 0;
  char string_final[tam_buffer];
  char buffer[tam_buffer];

  //inicializando
  for (int i = 0; i < tam_buffer; i++){
    string_final[i] = '\0';
    buffer[i] = '\0';
  }

  fgets(buffer, tam_buffer, stdin);

  //aqui vamos ler a string até o espaço e inverter palavra por palavra
  for (int pos_string = 0; pos_string < (int)strlen(buffer); pos_string++){
    if (buffer[pos_string + 1] == ' ' || buffer[pos_string + 1] == '\n'){
      for (int j = pos_string; j >= inicio; j--){
        string_final[inicio_auxiliar] = buffer[j];
        inicio_auxiliar++;
      }
      if (buffer[pos_string + 1] == ' '){
        string_final[pos_string + 1] = ' ';
        inicio_auxiliar++;
      }
      inicio = inicio_auxiliar;
    }
  }
    
  printf("%s\n", string_final);
  return 0;
}
