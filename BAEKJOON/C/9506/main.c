#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0;
    int i,j;
    scanf("%d",&a);

    while(a!=-1)
    {
        for(i=1; i<a; i++) //���ǿ� �´��� �˻� (������� ���� �������ΰ�?)
        {
            if(a%i==0) //�������� 0�̸� sum���ٰ� ���ϰ�, �ƴϸ� �׳� ��� ������
            {
                sum+=i;
            }
        }
        if(sum==a) //sum���ϰ� ����ڰ� �Է��� ���ϰ� ������ ��ü ����� ������ְ�, �ƴϸ� �������� �ƴ϶�� ���
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
