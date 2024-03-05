//3) Write a program which accept matrix and return largest number from both the diagonals

import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int MaxDiagonal()
    {
        int i = 0,j = 0,iMax = 0;
        int FirstDigMax = Arr[0][0];
        int SecondDigMax = Arr[Arr.length - 1][0]; 

        for(i = 0;i<Arr.length;i++)
        {
            for(j = 0;j<Arr[i].length;j++)
            {
                if((Arr[i][j] > FirstDigMax) || (Arr[i][j] > SecondDigMax))
                {
                    iMax++;
                }
            }
        }
        return iMax;
    }
}

class Assignment46Program3
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

        iRet = mobj.MaxDiagonal();
        System.out.println("Maximum no is : "+iRet);

        mobj = null;
        System.gc();
    }
}