#include <stdio.h>
#define N 8
typedef int Data;
typedef struct {
    Data a[N];      // место для данных
    unsigned int n; // сколько данных хранится
} Stack;

void print(Stack * s) {
    for(unsigned int i = 0; i < s->n; i++)
        printf("%d ", s->a[i]);
    printf("\n");
}

void init(Stack *s) {
    s->n = 0;
}

int main() {
    Stack stack = {{7, 4, 1}, 3};
    print(&stack);
    return 0;
}
