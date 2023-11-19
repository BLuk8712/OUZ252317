#include <stdio.h>
int Policz(int a, int b){
    return a+b
}
int main() {
    int a,b;
    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);
    printf("Wynik %d + %d = %d",a,b, Policz(a,b));
    return 0;
}
