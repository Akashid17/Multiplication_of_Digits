using System;

class ArithmeticX
{
	public int MultDigits(int iNo)
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
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.MultDigits(iValue);

		Console.WriteLine(iRet);
	}
}