#include <stdio.h>
#include <string.h>

void skipSpace(char**strptr){
    int numspace=strspn(*strptr, " ");
    *strptr+=numspace;
    
}
int main(int argc, char *argv[]){
    char *mystr="    hi";
    skipSpace(&mystr);
    printf("%s\n",mystr);
    return 0;
}