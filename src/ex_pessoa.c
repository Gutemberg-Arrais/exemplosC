#include <stdio.h>
#include <stdlib.h>

struct person
{
  char *name;
  char sex;
  int age;
};
typedef struct person Person;

void showPerson(Person *p)
{
  printf("-----------------------\n");
  printf("Nome:\t%s\nSexo:\t%c\nIdade:\t%d\n", p->name, p->sex, p->age);
}

Person *createPerson(char *name, char sex, int age)
{
  Person *p = malloc(sizeof(Person));
  p->name = name;
  p->age = age;
  p->sex = sex;
}

int main(int argc, char const **argv)
{
  Person *p1 = createPerson("Anakin Skywalker", 'M', 20);

  Person p2;
  p2.name = "Padme Amidala";
  p2.age = 35;
  p2.sex = 'F';

  showPerson(p1);
  free(p1);
  p1 = NULL;
  showPerson(&p2);

  return 0;
}