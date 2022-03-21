package ch04;

public class FindGCD {
	public int findGCD(int num1, int num2) {
		int min = 0;
		int GCD = 0;
		
		if (num1 < num2)
			min = num1;
		else
			min = num2;
		
		for (int i = min; i >= 1; i--)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				GCD = i;
				break;
			}
		}
		
		return GCD;
	}
	public int findGCDEuclid(int num1, int num2) {
		if (num2 == 0)
			return num1;
		else
			return findGCD(num2, num1 % num2);
	}
}
