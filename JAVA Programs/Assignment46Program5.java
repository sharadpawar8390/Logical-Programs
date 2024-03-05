//5) Write a program which accept matrix and swap the contents of consecutive rows.

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void SwapRows(int X,int Y)
    {
        int i = 0,j = 0;
        int []temp = Arr[X - 1];
        Arr[X - 1] = Arr[Y - 1];
        Arr[Y - 1] = temp;

        for(i = 0;i<Arr.length;i++)
        {
            for(j = 0;j<Arr[i].length;j++)
            {
                {
                    System.out.print(Arr[i][j] +"");
                }
                System.out.println();
            }
        }
    }
}

class Assignment46Program5
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

        System.out.println("Enter the row which are swap : ");
        iRowSwap1 = sobj.nextInt();

        System.out.println("Enter the row which are swap to : ");
        iRowSwap2 = sobj.nextInt();

        mobj.SwapRows(iRowSwap1,iRowSwap2);
        mobj.Display();

        mobj = null;
        System.gc();
    }
}