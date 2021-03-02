#include <stdio.h>

int main(int argc, char const *argv[])
{
  double cotation = 1.0, real = 1.0, dollar = 1.0;

  printf("Informe a cotação atual do real em dollar: ");
  scanf("%lf", &cotation);

  printf("Informe o valor em real que deseja converter: ");
  scanf("%lf", &real);

  dollar = real / cotation;

  printf("O valor R$%4.2f convertido em dollar é U$%4.2f\n", real, dollar);

  return 0;
}
