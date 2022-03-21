package ch04;

public class EvenSum {
	private int sum = 0;
	public int printEvenSum(int num) {
		for (int i = 1; i <= num; i++)
		{
			if (i % 2 == 0)
				sum += i;
		}
		return sum;
	}
}
