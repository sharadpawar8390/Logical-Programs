// Problem statement : Display average of 3 numbers

import * as readlineSync from 'readline-sync';

function Average(iNo1: number, iNo2: number, iNo3: number): number 
{
    let fAns: number = 0.0;
    fAns = (iNo1 + iNo2 + iNo3) / 3;

    return fAns;
}

function main(): void 
{
    let iValue1: number = 0;
    let iValue2: number = 0;
    let iValue3: number = 0;
    let fRet: number = 0.0;

    console.log("Enter first number : ");
    iValue1 = parseInt(readlineSync.question());

    console.log("Enter second number : ");
    iValue2 = parseInt(readlineSync.question());

    console.log("Enter third number : ");
    iValue3 = parseInt(readlineSync.question());

    fRet = Average(iValue1, iValue2, iValue3);

    console.log(`Average is : ${fRet}`);
}

main();
