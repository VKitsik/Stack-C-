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

void push(Stack *st, Data data) {
    st->a[st->n] = data;
    st->n++;
}

Data pop(Stack * st) {
    st->n --;
    Data res = st->a[st->n];
    return res;
}

int main() {
    Stack stack;
    Stack *st = &stack;
    init(st);
    print(&stack);

    push(st, 5);
    print(st);      // 5
    push(st, 17);
    print(st);      // 5 17
    push(st, -3);
    print(st);
    return 0;
}
