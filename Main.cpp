
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        int MultDigits(int);
};

int ArithmeticX::MultDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iMut = 1;

    if(iNo == 0)
    {
        iMut = 0;
    }

    while(iNo != 0)
    {
        if(iNo%10 != 0)
        {
            iMut *= iNo%10;
        }   

        iNo /= 10;
    }
    return iMut;
}

int main()
{
    ArithmeticX aobj;

    int iValue = 0;
    
    cout<<"Enter Number\n";
    cin>>iValue;

    int iRet = aobj.MultDigits(iValue);

    cout<<iRet<<endl;

    return 0;
}