#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int c=*a+*b;
    int y=*a-*b;
    if (y<0)
        *b=-y;
    else
        *b=y;
    *a=c;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
