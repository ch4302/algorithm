import java.util.Scanner;
public class Code_2439 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int height = sc.nextInt();
		
		for(int i = 1; i <= height; i++){
			for(int j = height; j > i; j--){
				System.out.print(" ");
			}
			for(int k = 1; k <= i; k++){
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
