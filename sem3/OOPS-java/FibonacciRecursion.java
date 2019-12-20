import java.util.Scanner;

class Fibo {
    static int fiboRec(int n)
    {
        if(n < 2)
        {
            return n;
        }
        else
        {
            return fiboRec(n-1) + fiboRec(n-2);
        }
    }
}

class FibonacciRecursion {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the size:");
        int size = sc.nextInt();
        for(int i=0; i<size; i++)
        {
            System.out.print(Fibo.fiboRec(i) + " ");
        }
    }
}
