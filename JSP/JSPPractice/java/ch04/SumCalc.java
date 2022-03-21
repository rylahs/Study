package ch04;

public class SumCalc {
	private int sum = 0;
	
	public int printSum(int num) {
		for (int i = 1; i <= num; ++i)
			sum += i;
		return sum;
	}
}
