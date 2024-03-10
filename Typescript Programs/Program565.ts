// Display average of all numbers from the array.

import * as readlineSync from 'readline-sync';

function Average(Arr: number[]): number 
{  
    let iCnt: number = 0;
    let iSum: number = 0;

    for(iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        iSum = iSum + Arr[iCnt];   
    }
    return iSum/Arr.length;
}

function main(): void 
{
    let iCount: number = 0;
    let array: number[] = [];

    console.log("Enter the number of elements that you want to enter : ");
    iCount = parseInt(readlineSync.question());

    console.log(`Dynamic memory gets allocated successfully for ${iCount} elements`);

    console.log(`Enter the ${iCount} values : `);
   
    for(let iCnt = 0; iCnt < iCount; iCnt++)  
    {
        console.log(`Enter the elements no ${iCnt + 1} : `);
        array.push(parseInt(readlineSync.question()));
    }

    let iRet: number = Average(array); 

    console.log(`The average is : ${iRet}`);
  
    console.log("Dynamic memory deallocated successfully...");
}

main();
