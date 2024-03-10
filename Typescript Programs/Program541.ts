// Problem statement : Calculate area of circle

import * as readlineSync from 'readline-sync';

function CalculateArea(fValue: number): number 
{
    const PI: number = 3.14;
    let fAns: number = 0.0;
    
    fAns = PI * fValue * fValue;

    return fAns;
}

function main(): void 
{
    let fRadius: number = 0.0;
    let fArea: number = 0.0;

    console.log("Enter the radius of the circle : ");
    fRadius = parseFloat(readlineSync.question());

    fArea = CalculateArea(fRadius);

    console.log("Area of the circle is : ", fArea);
}

// Call the main function
main();
