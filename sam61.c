#include<stdio.h>
void main()
{
    char a[100];
    int n;
    printf("\nenter string\n");
    scanf("%s",&a);
    printf("\nenter value\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}
}
