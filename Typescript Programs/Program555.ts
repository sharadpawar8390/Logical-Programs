// Count the digits

import * as readlineSync from 'readline-sync';

function CountDigits(iNo: number): number 
{
    let iCnt: number = 0;

    while(iNo !== 0)
   {
       iNo = Math.floor(iNo / 10);
       iCnt++;
   }
   return iCnt;
}

function main(): void 
{
    let iValue: number = 0;
    let iRet: number = 0;

    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());

    iRet = CountDigits(iValue);

    console.log(`Number of digits are : ${iRet}`);
}

main();
