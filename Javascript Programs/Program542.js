"use strict";
// Problem statement : Calculate cube of any number
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function CalculateCube(iValue) {
    var iCube = 0;
    iCube = iValue * iValue * iValue;
    return iCube;
}
function main() {
    var iNo = 0;
    var iAns = 0;
    console.log("Enter number : ");
    iNo = parseInt(readlineSync.question());
    iAns = CalculateCube(iNo);
    console.log("Cube is : ", iAns);
}
main();
