
import java.lang.*;
import java.io.*;

class Arithmetic
{
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
}

class Main
{
	public static void main(String Arg[])
	{
		BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

		int iValue = 0;

		try
		{
			System.out.println("Enter Number");
			iValue = Integer.parseInt(bobj.readLine());
		}
		catch(Exception eobj)
		{}

		Arithmetic aobj = new Arithmetic();

		int iRet =  aobj.MultDigits(iValue);

		System.out.println(iRet);
	}
}