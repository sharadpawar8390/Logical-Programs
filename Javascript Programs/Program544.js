"use strict";
// Problem statement : Calculate percentage
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function CalculatePercentage(iMarks, iTotal) {
    var fPercentage = 0.0;
    if (iMarks < 0 || iTotal < 0 || iMarks > iTotal) {
        console.log("Invalid input");
        return fPercentage;
    }
    fPercentage = (iMarks / iTotal) * 100;
    return fPercentage;
}
function main() {
    var iValue1 = 0;
    var iValue2 = 0;
    var fRet = 0.0;
    console.log("Enter the marks : ");
    iValue1 = parseInt(readlineSync.question());
    console.log("Enter the total marks : ");
    iValue2 = parseInt(readlineSync.question());
    fRet = CalculatePercentage(iValue1, iValue2);
    console.log("Your percentage is : ".concat(fRet));
}
main();
