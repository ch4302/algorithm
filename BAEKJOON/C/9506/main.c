#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0;
    int i,j;
    scanf("%d",&a);

    while(a!=-1)
    {
        for(i=1; i<a; i++) //조건에 맞는지 검사 (약수들의 합이 완전수인가?)
        {
            if(a%i==0) //나머지가 0이면 sum에다가 더하고, 아니면 그냥 계속 돌리기
            {
                sum+=i;
            }
        }
        if(sum==a) //sum값하고 사용자가 입력한 값하고 같으면 전체 약수를 출력해주고, 아니면 완전수가 아니라고 출력
        {
            printf("%d = ",sum);
            for(j=1; j<sum; j++)
            {
                if(sum%j==0)
                {
                    if(j==1)
                    {
                        printf("%d",j);
                    }
                    else
                    {
                        printf(" + ");
                        printf("%d",j);
                    }
                }
            }
            printf("\n");
        }
        else if(sum!=a)
        {
            printf("%d is NOT perfect.\n",a);
        }
        int a=0;
        scanf("%d",&a);
    }
    while(a==-1)
    {
        break;
    }


    return 0;
}
