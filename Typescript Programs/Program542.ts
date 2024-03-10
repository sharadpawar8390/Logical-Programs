// Problem statement : Calculate cube of any number

import * as readlineSync from 'readline-sync';

function CalculateCube(iValue: number): number 
{
    let iCube: number = 0;

    iCube = iValue * iValue * iValue;
    return iCube;
}

function main(): void 
{
    let iNo: number = 0;
    let iAns: number = 0;

    console.log("Enter number : ");
    iNo = parseInt(readlineSync.question());

    iAns = CalculateCube(iNo);

    console.log("Cube is : ", iAns);
}

main();
