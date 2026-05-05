

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d", &n);
    
    int *stack = (int *)malloc(n * sizeof(int));
    int top = -1;
    
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        stack[++top] = x;
    }
    
    scanf("%d", &m);
    
    for(int i = 0; i < m && top >= 0; i++) {
        top--;
    }
    
    for(int i = top; i >= 0; i--) {
        printf("%d", stack[i]);
        if(i > 0) printf(" ");
    }
    
    free(stack);
    return 0;
}
