// Problem statement : Display maximum number between 3 numbers

import * as readlineSync from 'readline-sync';

function Maximum(iNo1: number, iNo2: number, iNo3: number): number 
{
    if (iNo1 >= iNo2 && iNo1 >= iNo3) 
    {
        return iNo1;
    } 
    else if (iNo2 >= iNo1 && iNo2 >= iNo3) 
    {
        return iNo2;
    } 
    else 
    {
        return iNo3;
    }
}

function main(): void 
{
    let iValue1: number = 0;
    let iValue2: number = 0;
    let iValue3: number = 0;
    let iRet: number = 0;

    console.log("Enter first number : ");
    iValue1 = parseInt(readlineSync.question());

    console.log("Enter second number : ");
    iValue2 = parseInt(readlineSync.question());

    console.log("Enter third number : ");
    iValue3 = parseInt(readlineSync.question());

    iRet = Maximum(iValue1, iValue2, iValue3);

    console.log(`Largest number is : ${iRet}`);
}

main();
