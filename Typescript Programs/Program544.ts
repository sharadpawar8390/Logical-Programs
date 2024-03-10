// Problem statement : Calculate percentage

import * as readlineSync from 'readline-sync';

function CalculatePercentage(iMarks: number, iTotal: number): number 
{
    let fPercentage: number = 0.0;

    if (iMarks < 0 || iTotal < 0 || iMarks > iTotal) 
    {
        console.log("Invalid input");
        return fPercentage;
    }

    fPercentage = (iMarks / iTotal) * 100;
    return fPercentage;
}

function main(): void 
{
    let iValue1: number = 0;
    let iValue2: number = 0;
    let fRet: number = 0.0;

    console.log("Enter the marks : ");
    iValue1 = parseInt(readlineSync.question());

    console.log("Enter the total marks : ");
    iValue2 = parseInt(readlineSync.question());

    fRet = CalculatePercentage(iValue1, iValue2);

    console.log(`Your percentage is : ${fRet}`);
}

main();
