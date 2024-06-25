#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(int argc, char *argv[]) {
  printf("size of char: %lu byte(s) \n", sizeof(char));
  printf("size of int: %lu byte(s) \n", sizeof(int));
  printf("size of long: %lu byte(s) \n", sizeof(long));
  printf("size of short: %lu byte(s) \n", sizeof(short));
  printf("size of float: %lu byte(s) \n", sizeof(float));
  return (0);
}
