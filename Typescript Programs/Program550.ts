// Accept number from user and print * of that number on screen(ex *****)

import * as readlineSync from 'readline-sync';

function Display(iNo: number): void 
{
    for (let iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        console.log("*\t");
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
