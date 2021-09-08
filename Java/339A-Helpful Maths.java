import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String show = sc.nextLine();
		String rlt = "";
		int arr[] = new int[3];
		int len = show.length();
		
		if (len == 1) {
            System.out.println(show);
            return;
        }
        
        for (int i = 0; i < len; i++) {
            if (show.charAt(i) == '1')
                arr[0]++;
            else if (show.charAt(i) == '2')
                arr[1]++;
            else if (show.charAt(i) == '3')
                arr[2]++;
        }

        for (int i = 0; i < arr[0]; i++) {
            rlt += "1+";
        }
        for (int i = 0; i < arr[1]; i++) {
            rlt += "2+";
        }
        for (int i = 0; i < arr[2]; i++) {
            rlt += "3+";
        }
        rlt = rlt.substring(0, rlt.length() - 1);

        System.out.println(rlt);
	}
}
