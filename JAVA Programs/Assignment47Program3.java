// 3) Write a program which accept matrix and reverse the contents of each column.

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void ReverseCol()
    {
        int i = 0,j = 0;
        System.out.println("Reverse elements are : ");

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i][Arr[0].length - 1];
                Arr[i][Arr[0].length - 1] = temp;
                System.out.print(Arr[j][i]+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment47Program3
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

        mobj.ReverseCol();

        mobj = null;
        System.gc();
    }
}