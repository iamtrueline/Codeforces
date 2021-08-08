import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[][] matrix = new int[5][5];
		int x = 0, y = 0, dx = 0, dy = 0;
		
		for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                matrix[i][j] = sc.nextInt();
                if (matrix[i][j] != 0) {
                    x = i;
                    y = j;
                }
            }
        }
        
        if (x >= 2) { 
            dx = x - 2;
        }
        else {
            dx = 2 - x;
        }
        if (y >= 2) {
            dy = y - 2;
        }
        else {
            dy = 2 - y;
        }
        System.out.println(dx+dy);
	}
}
