// Accept number from user and return its reverse number(ex 1234 = 4321)

import * as readlineSync from 'readline-sync';

function Reverse(iNo: number): number 
{
    let iRev: number = 0;
    let iDigit: number = 0;

    while(iNo !== 0)
    {
        iDigit = iNo % 10;
        iNo = Math.floor(iNo / 10);
        iRev = (iRev *10) + iDigit;
    }
    return iRev;
}

function main(): void 
{
    let iValue: number = 0;
    let iRet: number = 0;

    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());

    iRet = Reverse(iValue);

    console.log(`Reverse number is : ${iRet}`);
}

main();
