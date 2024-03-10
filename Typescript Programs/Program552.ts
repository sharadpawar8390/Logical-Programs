// To accept number from user and display its sum of factors.

import * as readlineSync from 'readline-sync';

function SumFactors(iNo: number): number 
{
    let iSum: number = 0;

    for (let iCnt = 1; iCnt <= iNo / 2; iCnt++) 
    {
        if (iNo % iCnt === 0) 
        {
            iSum += iCnt;
        }
    }

    return iSum;
}

function main(): void 
{
    let iValue: number = 0;
    let iRet: number = 0;

    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());

    iRet = SumFactors(iValue);
    console.log(`Sum of factors is : ${iRet}`);
}

main();
