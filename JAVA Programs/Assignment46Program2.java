//2) Write a program which accept matrix and one number from user and return frequency of that number.

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Frequency()
    {
        int i = 0,j = 0;
        int iCnt = 0;

        for(i = 0;i<Arr.length;i++)
        {
            for(j = 0;j<Arr[i].length;j++)
            {
                if(Arr[i][j] == 9)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }
}

class Assignment46Program2
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

        iRet = mobj.Frequency();
        System.out.println("Frequency is : "+iRet);

        mobj = null;
        System.gc();
    }
}