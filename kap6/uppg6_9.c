#include <stdio.h>
#define MAX 200

static char s[MAX];
static int top = -1;
static int bot = 0;

void push(char c){
    if(top < MAX - 1){
        s[++top] = c;
        printf("pushed: %c at position %d\n", c, top);
    }
    else{
        printf("queue full!!\n");
    }
}

char pop(void){
    char c;
    if(top >= 0){
        c = s[bot];
        ++bot;
        --top;
        return c;
    }
    else{
        printf("queue empty!!\n");
    }
}

int empty(void){
    return top < 0;
}

void queue(void){
    char c;
    push('a');
    push('b');
    push('c');
    c = pop();
    printf("popped: %c\n", c);
    c = pop();
    printf("popped: %c\n", c);
    c = pop();
    printf("popped: %c\n", c);
    pop();
    bot = 0;
}