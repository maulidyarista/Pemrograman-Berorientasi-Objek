import java.util.Scanner;
public class Deret {
	int A, B, X;
	Scanner scan = new Scanner(System.in);
	
	Deret(){
		System.out.print("Input Nilai Awal : ");
		A = scan.nextInt();
		System.lineSeparator();
		
		System.out.print("Input Beda : ");
		B = scan.nextInt();
		System.lineSeparator();
		
		System.out.print("Input Jumlah deret yang diinginkan : ");
		X = scan.nextInt();
		System.lineSeparator();		
	}
	
	void Aritmatika() {
		int temp;
		temp = A;
		for(int i = 1; i <= X; i++) {
			System.out.print(temp + " ");
			temp = temp + B;
		}
	}
	
	
	public static void main(String[] args) {
		Deret obj = new Deret();
		obj.Aritmatika();

	}

}