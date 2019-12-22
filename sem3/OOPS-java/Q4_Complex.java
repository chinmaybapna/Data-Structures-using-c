import java.util.Scanner;

class Complex {
    int real;
    int img;
    
    Complex() {
        real = 0;
        img = 0;
    }
    
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    
    static void addition(Complex c1, Complex c2)
    {
        Complex add = new Complex();
        add.real = c1.real + c2.real;
        add.img = c1.img + c2.img;
        System.out.println("the addition is: " + add.real + "+ (" + add.img + ")i");
    }
    
    static void subtraction(Complex c1, Complex c2)
    {
        Complex sub = new Complex();;
        sub.real = c1.real - c2.real;
        sub.img = c1.img - c2.img;
        System.out.println("the subtraction is: " + sub.real + "+ (" + sub.img + ")i");
    }
    
    static void multiplication(Complex c1, Complex c2)
    {
        Complex mul = new Complex();
        mul.real = c1.real*c2.real - c1.img*c2.img; 
        mul.img = c1.real*c2.img + c1.img*c2.real;
        System.out.println("the multiplication is: " + mul.real + "+ (" + mul.img + ")i");
    }
}

class Q4_Complex {
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
		System.out.print("Enter the real part of 1st number: ");
		int r1 = sc.nextInt();
		System.out.print("Enter the imaginary part of 1st number: ");
		int i1 = sc.nextInt();
		
		Complex c1 = new Complex(r1,i1);
		
		System.out.print("Enter the real part of 2nd number: ");
		int r2 = sc.nextInt();
		System.out.print("Enter the imaginary part of 2nd number: ");
		int i2 = sc.nextInt();
		
		Complex c2 = new Complex(r2,i2);
		
		Complex.addition(c1,c2);
 		Complex.subtraction(c1,c2);
 		Complex.multiplication(c1,c2);
	}
}
