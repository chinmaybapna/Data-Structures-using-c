import java.util.Scanner;

class Stack {
    private int top;
    int stack[], size, i;
    Stack(int s) {
        top = -1;
        size = s;
        stack = new int[s];
    }
    
    void push()
    {
        Scanner sc = new Scanner(System.in);
        int item;
        if(top == size-1)
        {
            System.out.println("stack is full");
        } 
        else {
            System.out.println("enter the item to be pushed");
            item = sc.nextInt();
            top = top+1;
            stack[top] = item;
        }
    }
    
    void pop()
    {
        if(top == -1)
        {
            System.out.println("stack is empty");
        }
        else
        {
            System.out.println("the item to be deleted is " + stack[top]);
            top = top-1;
        }
    }
    
    void display()
    {
        if(top == -1)
        {
            System.out.println("stack is empty");
        }
        else {
            for(i=0; i<=top; i++)
            {
                System.out.print(stack[i] + " ");
            }
        }
    }
}

class MainStack {
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    System.out.println("enter size of stack");
	    int size = sc.nextInt();
	    Stack myStack = new Stack(size);
	    while(true)
	    {
		    System.out.println("1.push");
		    System.out.println("2.pop");
		    System.out.println("3.display");
		    System.out.println("4.exit");
		    System.out.println("enter choice:");
		    int ch = sc.nextInt();
		    switch(ch)
		    {
		        case 1: myStack.push(); break;
		        case 2: myStack.pop(); break;
		        case 3: myStack.display(); break;
		        case 4: System.exit(0); break;
		        default: System.out.println("enter a valid choice");
		    }
	    }

	}
}
