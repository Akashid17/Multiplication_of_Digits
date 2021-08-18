
#include<stdio.h>

int MultDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iMult = 1;

    if(iNo == 0)
    {
        iMult = 0;
    }

    while(iNo != 0)
    {
        if(iNo%10 != 0)
        {
            iMult *= iNo%10;
        }
        
        iNo /= 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}