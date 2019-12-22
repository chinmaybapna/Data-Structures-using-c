import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;

public class ArrayListWithIterator {
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    ArrayList<String> qu = new ArrayList<>();
	    Iterator itr = qu.iterator();
		while(true)
		{
		    System.out.println("\n1.insert");
		    System.out.println("2.delete");
		    System.out.println("3.display");
		    System.out.println("4.print strings whose length is less than 5");
		    System.out.println("5.exit");
		    System.out.println("enter choice");
            int ch = sc.nextInt();
            switch(ch)
            {
                case 1: System.out.println("enter the string to be inserted");
                        String str = sc.next();
                        qu.add(qu.size(), str);
                        break;
                        
                case 2: System.out.println("the deleted string is " + qu.remove(0));
                        break;
                        
                case 3: itr = qu.iterator();
                        while(itr.hasNext())
                        {
                            System.out.print(itr.next() + " ");
                        }
                        break;
                        
                case 4: itr = qu.iterator();
                        while(itr.hasNext())
                        {
                            str = (String) itr.next();
                            if(str.length() < 5)
                            {
                                System.out.print(str + " ");
                            }
                        }
                        break;
                        
                case 5: System.exit(0); break;
                
                default: System.out.print("enter a valid choice");
            }
		}
	}
}
