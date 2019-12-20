import java.util.Scanner;

class Account {
    int accNo;
    String name;
    int phoneNo;
    float balance;
    
    void getInput()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter account holder details");
        System.out.println("enter account number:");
        accNo = sc.nextInt();
        System.out.println("enter name:");
        name = sc.next();
        System.out.println("enter phone number:");
        phoneNo = sc.nextInt();
        System.out.println("enter balance:");
        balance = sc.nextFloat();
    }
    
    void deposit()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the amount to be deposited:");
        float deposit = sc.nextFloat();
        balance += deposit;
        System.out.println("the new balance is: " + balance);
    }
    
    void withdraw()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the amount to be withdrawn:");
        float withdrawn = sc.nextFloat();
        balance -= withdrawn;
        System.out.println("the new balance is: " + balance);
    }
    
    void printDetails()
    {
        System.out.println("Account Number:" + accNo);
        System.out.println("Name:" + name);
        System.out.println("Phone Number:" + phoneNo);
        System.out.println("balance:" + balance);
        
    }
}

class AccountActions {
    public static void main (String[] args) {
        int ch;
        Scanner sc = new Scanner(System.in);
        Account acc = new Account();
        while(true)
        {
            System.out.println("1.Get Input");
            System.out.println("2.Deposit to Account");
            System.out.println("3.Withdraw from Account");
            System.out.println("4.View details of Account");
            System.out.println("5.Exit");
            System.out.println("enter choice:");
            ch = sc.nextInt();
            switch(ch)
            {
                case 1: acc.getInput(); break;
                case 2: acc.deposit(); break;
                case 3: acc.withdraw(); break;
                case 4: acc.printDetails(); break;
                case 5: System.exit(0); break;
                default: System.out.println("enter a valid choice");
            } 
        }
    }
}
