import java.util.Scanner;
import java.util.Arrays;

public class Q6_Strings {
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.print("enter the string: ");
		String str = sc.nextLine(); //sc.next() won't read spaces
		while(true)
		{
		    System.out.println("\n\n1.extract a portion of string");
		    System.out.println("2.count all occurances of a particular word");
		    System.out.println("3.replace a substring in a string");
		    System.out.println("4.rearrange string in alphabetical order");
		    System.out.println("5.comparing two strings (ignoring case)");
		    System.out.println("6.concatnate two strings");
		    System.out.println("7.exit");
		    System.out.println("enter choice");
		    int ch = sc.nextInt();
		    switch(ch)
		    {
		        case 1: System.out.print("enter the length of extraction: ");
		                int m = sc.nextInt();
		                if(m <= str.length())
		                {
		                    System.out.print("the extracted string: " + str.substring(0,m));
		                }
		                break;
		        
		        case 2: System.out.print("enter the word: ");
		                String word = sc.next();
		                int count = 0;
		                while(str.contains(word))
		                {
		                    int index = str.indexOf(word);
		                    str = str.substring(index+1, str.length());
		                    count++;
		                }
		                System.out.print("the number of occurance of word: " + count);
		                break;
		                
		        case 3: System.out.print("enter the substring to be replaced: ");
		                String a = sc.next();
		                System.out.print("enter the string that replaces it: ");
		                String b = sc.next();
		                System.out.print("the modified string is: " + str.replaceFirst(a,b));
				break;
		                
		        case 4: String[] splits = str.split(" ");
		                Arrays.sort(splits);
		                System.out.print("the sorted array is: ");
		                for(String x : splits)
		                {
		                    System.out.print(x);
		                }
		                break;
		                
		        case 5: System.out.print("enter the string to be compared: ");
		                sc.nextLine();
		                String c = sc.nextLine();
		                if(str.equalsIgnoreCase(c)) {
		                    System.out.println("strings are equal");
		                }  else {
		                    System.out.println("strings are not equal");
		                }
		                break;
		                
		        case 6: System.out.print("enter the string to be concatinated: ");
		                sc.nextLine();
		                String d = sc.nextLine();
		                d = d + str;
		                System.out.print("the concatinated string is: " + d);
		                break;
		                
		        case 7: System.exit(0); break;
		        
		        default: System.out.print("Invalid Choice");
		    }
		}
	}
}
