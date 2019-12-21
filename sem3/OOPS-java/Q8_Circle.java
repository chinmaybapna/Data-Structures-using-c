import java.util.Scanner;
import java.lang.Math; 

class Circle {
    double radius;
    
    Circle(double r) {
        radius = r;
    }
    
    double area()
    {
        double area = Math.PI*radius*radius;
        return area;
    }
}

class Sector extends Circle {
    double angle;
    
    Sector(double r, double a) {
        super(r);
        angle = a;
    }
    
    double area() 
    {
        double area = 0.5*radius*radius*angle;
        return area;
    }
}

class Segment extends Circle {
    double length;
    
    Segment(double r, double l)
    {
        super(r);
        length = l;
    }
    
    double area()
    {
        double y = (radius-length)/radius-((radius-length)*(2*radius*length-length*length));
        double x = Math.pow(y, 1/2);
        double area = radius*radius*x;
        return area;
    }
}

public class q8_Circle {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the radius of the circle");
		double r = sc.nextDouble();
		System.out.println("enter the angle of the sector");
		double a = sc.nextDouble();
		System.out.println("enter the length of the segment");
		double l = sc.nextDouble();
		
		Circle circle = new Circle(r);
		Sector sector = new Sector(r,a);
		Segment segment = new Segment(r,l);
		
		System.out.println("the area of circle: " + circle.area());
		System.out.println("the area of sector: " + sector.area());
		System.out.println("the area of segment: " + segment.area());
	}
}
