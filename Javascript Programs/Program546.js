"use strict";
// Problem statement : Display minimum number between 2 numbers
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Minimum(iNo1, iNo2) {
    if (iNo1 < iNo2) {
        return iNo1;
    }
    else {
        return iNo2;
    }
}
function main() {
    var iValue1 = 0;
    var iValue2 = 0;
    var iRet = 0;
    console.log("Enter first number : ");
    iValue1 = parseInt(readlineSync.question());
    console.log("Enter second number : ");
    iValue2 = parseInt(readlineSync.question());
    iRet = Minimum(iValue1, iValue2);
    console.log("Largest number is : ".concat(iRet));
}
main();
