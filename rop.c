#include <stdlib.h>
#include <stdio.h>

void vuln()
{
  char buffer[64];
  printf("Input: \n");
  scanf("%s",buffer);
}
int main(int argc, char **argv)
{
  vuln();
}