import java.util.Scanner;

class Personal {
    String name;
    int age;
    String education;
    Salary salary;
    int yearsOfExperiance;
    int numberOfLoans;
    float loanAmount;
    
    Personal(String name, int age,  String education, Salary salary, int yearsOfExperiance, int numberOfLoans, float loanAmount) {
        this.name = name;
        this.age = age;
        this.education = education;
        this.salary = salary;
        this.yearsOfExperiance = yearsOfExperiance;
        this.numberOfLoans = numberOfLoans;
        this.loanAmount = loanAmount;
    }
    
    void taxPay()
    {
        //assuming the tax to be paid is 10% of the gross salary
        System.out.println("tax to be paid: " + salary.grossSalary/10);
    }
    
    void isEligible()
    {
        if(yearsOfExperiance > 5 && loanAmount < salary.grossSalary*10)
        {
            System.out.print("\nyou are eligible to get the loan");
        }
        else {
            System.out.print("\nyou are not eligible to get the loan");
        }
    }
    
    void isEligiblePromotion()
    {
        if(yearsOfExperiance > 7)
        {
            System.out.print("\nyou are eligible to get the promotion");
        }
        else {
            System.out.print("\nyou are not eligible to get the promotion");
        }
    }
    
    void display()
    {
        System.out.println("\nname of the person: " + name);
        System.out.println("age of the person: " + age);
        System.out.println("education of the person: " + education);
        System.out.println("salary of the person: " + salary.grossSalary);
        System.out.println("years of experiance of the person: " + yearsOfExperiance);
        System.out.println("number of loans of the person: " + numberOfLoans);
	    System.out.println("loan amount of the person: " + loanAmount);
    }
}

class Salary {
    float basic, da, hra;
    double grossSalary;
    Salary(float basic, float da, float hra) {
        this.basic = basic;
        this.da = da;
        this.hra = hra;
        grossSalary = this.basic + this.basic*this.da/100 + this.basic*this.hra/100;
    }
}

class PersonalDetails {
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    System.out.print("enter name of the person: ");
	    String name = sc.next();
	    
	    System.out.print("enter age of the person: ");
	    int age = sc.nextInt();
	    
	    System.out.print("enter education of the person: ");
	    String education = sc.next();
	    
	    System.out.println("enter salary of the person: ");
	    System.out.print("enter basic salary of the person: ");
	    float basic = sc.nextFloat();
	    System.out.print("enter da of the person: ");
	    float da = sc.nextFloat();
	    System.out.print("enter hra of the person: ");
	    float hra = sc.nextFloat();
	    Salary salary = new Salary(basic, da, hra);
	    
	    System.out.print("enter years of experiance of the person: ");
	    int yearsOfExperiance = sc.nextInt();
	    
	    System.out.print("enter number of loans of the person: ");
	    int numberOfLoans = sc.nextInt();
	    
	    System.out.print("enter loan amount of the person: ");
	    float loanAmount = sc.nextFloat();
	    
	    Personal p = new Personal(name, age, education, salary, yearsOfExperiance, numberOfLoans, loanAmount);
	    p.display();
	    p.taxPay();
	    p.isEligiblePromotion();
	    p.isEligible();
	}
}

