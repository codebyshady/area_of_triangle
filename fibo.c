#include <stdio.h>
int main(){
        int a=0,b=1,c,n;
        printf("Enter the number till which you want the fibo. series...\n");
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
        {

                printf("%d , ",a);
                c=a+b;
                a=b;
                b=c;
        }

    return 0;
}