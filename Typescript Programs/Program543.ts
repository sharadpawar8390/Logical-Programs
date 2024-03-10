// Problem statement : check number is even or odd

import * as readlineSync from 'readline-sync';

function CheckEven(iNo: number): boolean 
{
    if (iNo % 2 === 0) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

function main(): void 
{
    let iValue: number = 0;
    let bRet: boolean = false;

    console.log("Enter number :");
    iValue = parseInt(readlineSync.question());

    bRet = CheckEven(iValue);

    if (bRet === true) 
    {
        console.log(`${iValue} is an even number`);
    } else {
        console.log(`${iValue} is an odd number`);
    }
}

main();
