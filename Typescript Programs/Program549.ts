// Accept number from user and print number from 1 on screen(ex 1 to 10)

import * as readlineSync from 'readline-sync';

function Display(iNo: number): void 
{
    for (let iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        console.log(iCnt);
    }
}

function main(): void 
{
    let iValue: number = 0;

    console.log("Enter number of times you want to display on screen : ");
    iValue = parseInt(readlineSync.question());

    Display(iValue);
}

main();
