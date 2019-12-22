import java.util.Scanner;
import java.util.ArrayList;

public class ArrayList {
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    ArrayList<String> qu = new ArrayList<>();
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
                        
                case 3: for(int i=0; i<qu.size(); i++)
                        {
                            System.out.print(qu.get(i) + " ");
                        }
                        break;
                        
                case 4: for(int i=0; i<qu.size(); i++)
                        {
                            if(qu.get(i).length() < 5)
                            {
                                System.out.print(qu.get(i) + " ");
                            }
                        }
                        break;
                        
                case 5: System.exit(0); break;
                
                default: System.out.print("enter a valid choice");
            }
		}
	}
}
