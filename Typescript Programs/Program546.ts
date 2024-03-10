// Problem statement : Display minimum number between 2 numbers

import * as readlineSync from 'readline-sync';

function Minimum(iNo1: number, iNo2: number): number 
{
    if (iNo1 < iNo2) 
    {
        return iNo1;
    } 
    else 
    {
        return iNo2;
    }
}

function main(): void 
{
    let iValue1: number = 0;
    let iValue2: number = 0;
    let iRet: number = 0;

    console.log("Enter first number : ");
    iValue1 = parseInt(readlineSync.question());

    console.log("Enter second number : ");
    iValue2 = parseInt(readlineSync.question());

    iRet = Minimum(iValue1, iValue2);

    console.log(`Smallest number is : ${iRet}`);
}

main();
