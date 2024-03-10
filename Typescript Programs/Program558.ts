// Display even numbers from the array.

import * as readlineSync from 'readline-sync';

function EvenDisplay(Arr: number[]): void 
{
    console.log("\n Even Elements of the array are : ");

    for(let iCnt = 0; iCnt < Arr.length; iCnt++)
     {
        if(Arr[iCnt] % 2 === 0)        
        {  
            console.log(`${Arr[iCnt]}\t`);  
        }  
     }
     console.log();
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

    EvenDisplay(array); 
  
    console.log(`Dynamic memory deallocated successfully...`);
}

main();
