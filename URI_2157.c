#include <stdio.h>
#include <string.h>

int main() {

int n,a,b,i,k,p;
char c[200];
scanf("%d", &n);
for (i=0; i=n; --n)
{
    scanf("%d%d", &a, &b);
    for(i=a; i<=b; i++)
        printf("%d\n", i);
    for( i=b; i>=a; i--){
        sprintf(c,"%d",i);
        p = strlen(c);
       for (k=p; k>0; k--)
       {
           printf("%c\n",c[k] );
       }
    }
}

return 0; 
}
