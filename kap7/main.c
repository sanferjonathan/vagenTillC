#include "kap7.h"
#define MAX 7

int main(){
    char text[MAX] = "abcdefg";
    printf("%s", text);
    swap(text, MAX);
    printf("%s", text);
    getchar();
}