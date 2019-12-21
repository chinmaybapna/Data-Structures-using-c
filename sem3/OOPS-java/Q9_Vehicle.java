import java.util.Scanner;

abstract class Vehicle {
    int yearOfManufacture;
    
    Vehicle()
    {
        yearOfManufacture = 0;
    }
    
    abstract int getData();
    abstract void putData(int x);
}

final class FourWheeler extends Vehicle {
    void putData(int n)
    {
        yearOfManufacture = n;
    }
    
    int getData() {
        return yearOfManufacture;
    }
}

class TwoWheeler extends Vehicle {
    void putData(int n)
    {
        yearOfManufacture = n;
    }
    
    int getData() {
        return yearOfManufacture;
    }
}

class MyTwoWheeler extends TwoWheeler {
    void putData(int n) 
    {
        super.putData(n);
    }
}

class Q9_Vehicle {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        FourWheeler car = new FourWheeler();
        System.out.print("enter year of manufracture of four wheeler: ");
        int x = sc.nextInt();
        car.putData(x);
        System.out.println("the year of manufracture of four wheeler: " + car.getData());
        MyTwoWheeler bike = new MyTwoWheeler();
        System.out.print("enter year of manufracture of two wheeler: ");
        int y = sc.nextInt();
        bike.putData(y);
        System.out.println("the year of manufracture of two wheeler: " + bike.getData());
    }
}
