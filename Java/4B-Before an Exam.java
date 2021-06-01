import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int day, limitTime, max = 0;
        Scanner sc = new Scanner(System.in);
        
        day = sc.nextInt();
        limitTime = sc.nextInt();
        
        int flag = day - 1;
        
        int minmax[][] = new int[day][2];
        
        for(int i = 0; i < day; i++){
            minmax[i][0] = sc.nextInt();
            minmax[i][1] = sc.nextInt();
            max += minmax[i][1];
        }
        
        if(max == limitTime){
            System.out.println("YES");
            for(int i = 0; i < day; i++){
                System.out.print(minmax[i][1] + " ");
            }
        }
        else if(max > limitTime){
            while(max != limitTime){
                if(minmax[flag][1] > minmax[flag][0]){ 
                    minmax[flag][1] -= 1;
                    max--;
                }
                else{
                    if(flag == 0){
                        System.out.println("NO");
                        return;
                    }
                    flag--;
                }
            }
            System.out.println("YES");
            for(int i = 0; i < day; i++){
                System.out.print(minmax[i][1] + " ");
            }
        }
        else{
            System.out.println("NO");
        }
        return;
    } 
}
