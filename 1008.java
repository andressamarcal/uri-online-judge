import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {
    public static void main(String[] args) throws IOException {
 
		Scanner input = new Scanner(System.in);
		DecimalFormat df = new DecimalFormat("0.00");
		int NUMBER, HOURS;
		double VALUE, SALARY;

		NUMBER = input.nextInt();
		HOURS = input.nextInt();
		VALUE = input.nextDouble();

		SALARY = HOURS * VALUE;
		System.out.println("NUMBER = " + NUMBER);
		System.out.println("SALARY = U$ " + df.format(SALARY));

    }
}