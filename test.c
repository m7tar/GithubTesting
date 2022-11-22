#include <stdio.h>

int main(){
    printf("gimme radius: ");
    int radius;
    scanf("%d", &radius);
    printf("your radius is:%d\n", radius);
    //Strings
    char name[20]; //remember  \0
    printf("gimme name: ");
    scanf("%19s", name);
    printf("so your name is %s?\n", name);

    return 0;
}