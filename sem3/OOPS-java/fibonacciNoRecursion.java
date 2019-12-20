import java.util.Scanner;

class Fibo {
    static void FiboNoRec(int n)
    {
        int a = 0, b = 1;
        System.out.print(a + " ");
        System.out.print(b + " ");
        for(int i=2; i<n; i++)
        {
            int c = a + b;
            System.out.print(c + " ");
            a = b;
            b = c;
        }
    }
}

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the size:");
		int size = sc.nextInt();
		Fibo.FiboNoRec(size);
	}
}
