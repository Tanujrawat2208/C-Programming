//Sample Pattern
//         j    
//         u    
//         n    
//         a    
//     junaTanuj
//         a    
//         n    
//         u    
//         j

#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int n,i,j,k,m,a,b,c;
    printf("Enter The String \n");
    scanf("%s",&s);
    n=strlen(s);
    m=2*n;
    b=n;
    int l=1;
    printf("Output \n \n");
    for(i=1;i<=2*b-1;i++)
    {
        if(i!=b)
        {
            
            for(j=1;j<=b;j++)
            {
                if(j==b && m>b)
                printf("%c",s[m-(b+1)]);
                else if(j==b && m<=b)
                printf("%c ",s[l++]);
                else
                printf(" ");
            }
        }
        else
        {
            a=n+1;
            n=n+1;
            for(k=2*b;k>=2;k--)
            {
                if(k>b)
                {
                printf("%c",s[k-a]);
                }
                else
                {
                printf("%c",s[n-k]);
                }
            }
        }
        printf("\n");
        m=m-1;
        
    }
    return 0;
}
