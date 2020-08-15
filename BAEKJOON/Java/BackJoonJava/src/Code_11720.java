import java.util.Scanner;
public class Code_11720 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int num_cnt = sc.nextInt();
		
		long sum = 0;
		long num = sc.nextLong();
		
		for(int i=1; i<=num_cnt; i++){
			sum = sum + num % 10 ;
			num = num / 10;
		}
		System.out.println(sum);
	}

}
