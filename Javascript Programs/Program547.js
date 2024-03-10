"use strict";
// Problem statement : Display average of 3 numbers
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Average(iNo1, iNo2, iNo3) {
    var fAns = 0.0;
    fAns = (iNo1 + iNo2 + iNo3) / 3;
    return fAns;
}
function main() {
    var iValue1 = 0;
    var iValue2 = 0;
    var iValue3 = 0;
    var fRet = 0.0;
    console.log("Enter first number : ");
    iValue1 = parseInt(readlineSync.question());
    console.log("Enter second number : ");
    iValue2 = parseInt(readlineSync.question());
    console.log("Enter third number : ");
    iValue3 = parseInt(readlineSync.question());
    fRet = Average(iValue1, iValue2, iValue3);
    console.log("Average is : ".concat(fRet));
}
main();
