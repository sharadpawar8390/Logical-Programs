// Display count of odd numbers from the array.

import * as readlineSync from 'readline-sync';

function OddCount(Arr: number[]): number 
{  
    let iOddCnt: number = 0;

    console.log("\n Odd Elements of the array are : ");

    for(let iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)        
        {  
           iOddCnt++;
        }       
    }
    return iOddCnt;
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

    let iRet: number = OddCount(array); 

    console.log(`Number of odd elements are : ${iRet}`);
  
    console.log("Dynamic memory deallocated successfully...");
}

main();
