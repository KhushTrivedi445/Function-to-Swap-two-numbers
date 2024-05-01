#include<stdio.h>
void swap (int a,int b);
int main () {
    int x,y;
    printf("Value before swaping : ");
    scanf("%d",&x);
    printf("Value before swaping : ");
    scanf("%d",&y);
    swap(x,y);
    return 0;
}




void swap (int a , int b) {
    int c=a;
    a=b;
    b=c;
    printf("Value After swaping is %d\n",a);
    printf("Value After swapping is %d\n",b);
}