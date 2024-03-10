// Display frequency of given number by user from the array.

import * as readlineSync from 'readline-sync';

function Frequency(Arr: number[], iValue: number): number 
{  
    let iCnt: number = 0;
    let iFrequency: number = 0;

    for(iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            iFrequency++;
        }
    }
    return iFrequency;
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

    console.log("Enter the number you want to search : ");
    let iValue = parseInt(readlineSync.question());

    let iRet: number = Frequency(array, iValue); 

    console.log(`The frequency of given number is : ${iRet}`);
  
    console.log("Dynamic memory deallocated successfully...");
}

main();
