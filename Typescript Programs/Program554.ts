// To check number is a prime number or not.

import * as readlineSync from 'readline-sync';

function CheckPrime(iNo: number): boolean 
{
    let bFlag: boolean = true;

    if (iNo < 0) 
    {
        iNo = -iNo;
    }

    for (let iCnt = 2; iCnt <= iNo / 2; iCnt++) 
    {
        if (iNo % iCnt === 0) 
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

function main(): void 
{
    let iValue: number = 0;
    let bRet: boolean = false;

    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());

    bRet = CheckPrime(iValue);

    if (bRet) 
    {
        console.log(`${iValue} is a prime number`);
    } 
    else 
    {
        console.log(`${iValue} is not a prime number`);
    }
}

main();
