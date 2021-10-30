#include<cstdio>
#include<cstdlib>
#include<cstring>
int main()
{
    char x[1111];
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",x);
        for(j=0; j<strlen(x); j++)
        {

            if(x[j] == '1')
            {
                sum+=2;
            }
            else if(x[j] == '2')
            {
                sum+=5;
            }
            else if(x[j] == '3')
            {
                sum+=5;
            }
            else if(x[j] == '4')
            {
                sum+=4;
            }
            else if(x[j] == '5')
            {
                sum+=5;
            }
            else if(x[j] == '6')
            {
                sum+=6;
            }
            else if(x[j]== '7')
            {
                sum+=3;
            }
            else if(x[j] == '8')
            {
                sum+=7;
            }
            else if(x[j] == '9')
            {
                sum+=6;
            }
            else if(x[j] == '0')
            {
                sum+=6;
            }
        }
        printf("%d leds\n",sum);
        sum=0;
    }
    return 0;
}
