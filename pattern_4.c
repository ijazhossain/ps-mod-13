#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int star=1;
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=space;i++){
        
            printf(" ");
        }
        for(int i=1;i<=star;i++){
        
            printf("*");
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}