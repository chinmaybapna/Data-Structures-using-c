import java.util.Scanner;

class Sort {
    static void bubbleSort(int arr[], int size)
    {
        for(int i=0; i<size-1; i++)
        {
            for(int j=0; j<size-i-1; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        System.out.println("the new sorted array is:");
        for(int i=0; i<size; i++)
        {
            System.out.print(arr[i] + " ");    
        }

    }
}

class BubbleSort {
    public static void main (String[] args) {
        int[] arr = new int[10];
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the size size of array");
        int size = sc.nextInt();
        System.out.println("enter the array elements");
        for(int i=0; i<size; i++)
        {
            arr[i] = sc.nextInt();
        }
        Sort.bubbleSort(arr, size);
    }
}
