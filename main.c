#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
void check_leaks();

int main(int ac, char **av, char **env)
{
  int sa = open("stack_a", O_RDWR);
  int arr[ac - 1];
  int arr_size = ac - 1;
  int n;
  for (int i = 0; i < arr_size; i++)
  {
    n = atoi(av[i + 1]);
    printf("%d\n", n);
    write(sa, &(n), 3);
  }
  close(sa);
  check_leaks();
  return 0;
  //printf("%d\t", arr[i]);
}
