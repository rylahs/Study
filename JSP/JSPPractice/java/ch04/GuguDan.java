package ch04;

public class GuguDan {
	private int gugu[] = new int[9];
	
	public int[] MakeGugu(int n) {
		for (int i = 0; i < 9; i++)
			gugu[i] = n * (i + 1);
		
		return gugu;
	}
}
