import java.util.Scanner;

class Prime {
    static boolean checkPrime(int num)
    {
        boolean isPrime = true;
        for(int i=2; i<=num/2; i++)
        {
            if(num%i == 0)
            {
                isPrime = false;
                break;
            }
        }
        return isPrime; 
    }
}

class  CheckPrime {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number");
        int num = sc.nextInt();
        boolean result = Prime.checkPrime(num);
        if(result)
        {
            System.out.println("The number is Prime");
        }
        else
        {
            System.out.println("The number is not Prime");
        }
    }
}
