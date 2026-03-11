#include <stdio.h>
#include <ctype.h>

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}

int string2num(char *s, int base) {
    int a = 0;
    for (; *s; s++) {
        a = a * base + (*s - '0');
    }
    return a;
}

int main (void) {

  printf("Int\n");
  int i = 10000;
  dump(&i, sizeof(i));

  printf("\n");
  printf("Long int\n");
  long d = 10000;
  dump(&d, sizeof(d));

  printf("\n");
  printf("Short int\n");
  short s = 10000;
  dump(&s, sizeof(s));

  printf("\n");
  printf("Char\n");
  char p = 'a';
  char g = 97;
  dump(&p, sizeof(p));
  printf("%c\n", g);

  printf("\n");
  printf("Vetor de Char 1\n");
  char t[] = "7509";
  dump(t, sizeof(t));

  printf("\n");
  printf("Vetor de Char 2\n");
  char v[] = {'A',' ','\n','$'};
  dump(v, sizeof(v));

  printf("\n");
  printf("Questao 2\n");
  
  printf("==> %d\n", string2num("1234", 10));
  printf("==> %d\n", string2num("1234", 10) + 1);
  printf("==> %d\n", string2num("1234", 10) + string2num("1", 10));

  printf("%d\n", string2num("777", 8));
  printf("%d\n", string2num("777", 10));
  
  return 0;
}