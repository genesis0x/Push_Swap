#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int x = 5;
   char s[] = "pa";
    int pid = fork();
    if (pid == 0) {
    // child process
    x = 120;
    s[1] = 'o';
    //printf("child x:%p\n", &x);
    printf("child s:%s\n", s);
    } else {
    // parent process
     //printf("parent x:%p\n", &x);
     printf("parent s:%s\n", s);
    //printf("x = %d\n", x);
}


    return 0;
}
