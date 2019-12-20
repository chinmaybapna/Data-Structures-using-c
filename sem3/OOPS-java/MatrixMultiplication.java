import java.util.Scanner;

class Matrix {
    int rows, cols, matrix[][];
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        matrix = new int[r][c];
    }
    
    void readMatrix()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the data of the matrix:");
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                matrix[i][j] = sc.nextInt();
            }
        }
    }
    
    static void multiply(Matrix m1, Matrix m2)
    {
        int proRow = m1.matrix.length;
        int proCol = m2.matrix[0].length;
        Matrix proMatrix = new Matrix(proRow, proCol);
        if(proRow != proCol)
        {
            System.out.println("operation can't be performed");
        }
        else
        {
            for(int i=0; i<proRow; i++)
            {
                for(int j=0; j<proCol; j++)
                {
                    proMatrix.matrix[i][j] = 0;
                    for(int k=0; k<m1.cols; k++)
                    {
                        proMatrix.matrix[i][j] += m1.matrix[i][k]*m2.matrix[k][j];
                    }
                }
            }
            System.out.println("the multiplication of the matrices:");
            for(int i=0; i<proRow; i++)
            {
                for(int j=0; j<proCol; j++)
                {
                    System.out.print(proMatrix.matrix[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
}

class MatrixMultiplication {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("enter the dimensions of fist matrix: ");
        int rows1 = sc.nextInt();
        int cols1 = sc.nextInt();
        Matrix m1 = new Matrix(rows1, cols1);
        m1.readMatrix();
        
        System.out.print("enter the dimensions of second matrix: ");
        int rows2 = sc.nextInt();
        int cols2 = sc.nextInt();
        Matrix m2 = new Matrix(rows2, cols2);
        m2.readMatrix();
        
        Matrix.multiply(m1,m2);
    }
}
