// To check number is perfect or not.

import * as readlineSync from 'readline-sync';

function CheckPerfect(iNo: number): boolean 
{
    let iCnt: number = 0;
    let iSum: number = 0;

    if (iNo < 0) 
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++) 
    {
        if (iNo % iCnt === 0) 
        {
            iSum += iCnt;
        }
    }

    return iSum === iNo;
}

function main(): void 
{
    let iValue: number = 0;
    let bRet: boolean = false;

    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());

    bRet = CheckPerfect(iValue);

    if (bRet) 
    {
        console.log(`${iValue} is a perfect number`);
    } 
    else 
    {
        console.log(`${iValue} is not a perfect number`);
    }
}

main();
