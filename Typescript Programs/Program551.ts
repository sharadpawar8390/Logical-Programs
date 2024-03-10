// Accept number from user and display its factors.

import * as readlineSync from 'readline-sync';

function DisplayFactors(iNo: number): void 
{
    console.log(`Factors of ${iNo} are :`);

    for (let iCnt = 1; iCnt <= iNo / 2; iCnt++) 
    {
        if (iNo % iCnt === 0) 
        {
            console.log(iCnt);
        }
    }
}

function main(): void 
{
    let iValue: number = 0;

    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());

    DisplayFactors(iValue);
}

main();
