/*
 1) Write a program which accept matrix from user and display transpose of the matrix.
The transpose of a given matrix is formed by interchanging the rows and columns of a matrix.
 */

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void Transpose()
    {
        int i = 0,j = 0;
        System.out.println("Transpose elements are : ");

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[j][i]+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment47Program1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        mobj.Transpose();

        mobj = null;
        System.gc();
    }
}