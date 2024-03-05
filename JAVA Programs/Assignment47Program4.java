/*
 4) Write a program which accept matrix and check whether the matrix is identity matrix or not.
Identity matrix is a square matrix with 1's along the diagonal from upper left to lower right and 0's in all other positions.
If it satisfies the structure as explained before then the matrix is called as identity matrix.
 */

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public boolean ChkIdentity()
    {
        int i = 0,j = 0;
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((Arr[i] == Arr[j]) && (Arr[i][j] != 1) || (Arr[i] != Arr[j]) && (Arr[i][j] != 0))
                {
                    return false;
                }
                 
            }
        }
        return true;
    }
}

class Assignment47Program4
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

        if(mobj.ChkIdentity() == true)
        {
            System.out.println("It is Identity Matrix");
        }
        else
        {
            System.out.println("It is not identity matrix");
        }

        mobj = null;
        System.gc();
    }
}