// Sum of the digits

import * as readlineSync from 'readline-sync';

function SumDigits(iNo: number): number 
{
    let iSum: number = 0;

    while(iNo !== 0)
    {
      iSum = iSum + (iNo % 10);
      iNo = Math.floor(iNo / 10);
    }
    return iSum;
}

function main(): void 
{
    let iValue: number = 0;
    let iRet: number = 0;

    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());

    iRet = SumDigits(iValue);

    console.log(`Sum of digits are : ${iRet}`);
}

main();
