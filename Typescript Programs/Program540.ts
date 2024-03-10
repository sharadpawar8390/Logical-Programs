import * as readlineSync from 'readline-sync';

function Addition(iNo1: number, iNo2: number): number 
{
    let iSum: number = 0; 
    iSum = iNo1 + iNo2;
    return iSum;
}

function main(): void 
{
    let iValue1: number = 0; 
    let iValue2: number = 0; 
    let iAns: number = 0;   

    console.log("Enter first number : ");
    iValue1 = parseInt(readlineSync.question());

    console.log("Enter second number : ");
    iValue2 = parseInt(readlineSync.question());

    iAns = Addition(iValue1, iValue2); 

    console.log("Addition is : ", iAns);
}

main();
