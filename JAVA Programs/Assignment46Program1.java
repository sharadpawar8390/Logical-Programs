//1) Write a program which accept matrix from user and return addition of diagonal elements.

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int AddDiagonal()
    {
        int i = 0,j = 0;
        int iSum = 0;

        for(i = 0;i<Arr.length;i++)
        {
            for(j = 0;j<Arr[i].length;j++)
            {
                if(Arr[i] == Arr[j])
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }
}

class Assignment46Program1
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

        iRet = mobj.AddDiagonal();
        System.out.println("Addition of diagonal are : "+iRet);

        mobj = null;
        System.gc();
    }
}


