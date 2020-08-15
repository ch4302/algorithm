import java.util.Scanner;

public class Code_2441 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int height = sc.nextInt();

		for (int i = 1; i <= height; i++) {
			for (int j = 1; j < i; j++) {
				System.out.print(" ");
			}
			for (int k = i; k <= height; k++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
