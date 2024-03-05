/*
 5) /Write a program which accept matrix and check whether the matrix is Sparse matrix or not.
Sparse matrix is a matrix with the majority of its elements equal to zero.
 */

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public boolean ChkSquare()
    {
        int i = 0,j = 0;
        int ZeroCount = 0;
        int TotalCount = Arr.length * Arr[i].length;
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == 0)
                {
                    ZeroCount++;
                }
                 
            }
        }
        return ZeroCount > (TotalCount / 2);
    }
}

class Assignment47Program5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;
 
        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        if(mobj.ChkSquare() == true)
        {
            System.out.println("It is Square Matrix");
        }
        else
        {
            System.out.println("It is not Square matrix");
        }

        mobj = null;
        System.gc();
    }
}