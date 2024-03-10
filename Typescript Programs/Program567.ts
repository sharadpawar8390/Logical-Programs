// Display minimum number from the array.

import * as readlineSync from 'readline-sync';

function Minimum(Arr: number[]): number 
{  
    let iCnt: number = 0;
    let iMin: number = Arr[0];

    for(iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    let iRet: number = Minimum(array); 

    console.log(`The minimum number is : ${iRet}`);
  
    console.log("Dynamic memory deallocated successfully...");
}

main();
