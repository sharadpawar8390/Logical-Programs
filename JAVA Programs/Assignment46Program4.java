//4) Write a program which accept matrix and display addition of elements From each column.

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void AddColumn()
    {
        int i = 0, j = 0, iSum = 0;

        for(j = 0 ; j < Arr[j].length; j++)
        {
            for(i = 0; i < Arr.length;i++)
            {
                iSum = iSum + Arr[i][j];
            }
            System.out.println("Summation of Column : "+(j+1)+" is : "+iSum);
            iSum = 0;
        }
    }
}

class Assignment46Program4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;
        int iRowSwap1 = 0,iRowSwap2 = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        mobj.AddColumn();

        mobj = null;
        System.gc();
    }
}