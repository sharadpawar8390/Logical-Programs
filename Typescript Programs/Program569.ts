// Display * number of times given by user.

import * as readlineSync from 'readline-sync';

function Display(iNo: number): void 
{  
    let iCnt: number = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        console.log("*\t");
    }
    console.log();
}

function main()
{
    let iValue: number = 0;

    console.log("Enter the count : ");
    iValue = parseInt(readlineSync.question());

    Display(iValue); 
}

main();
