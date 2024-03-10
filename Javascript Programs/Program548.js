"use strict";
// Problem statement : Display maximum number between 3 numbers
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Maximum(iNo1, iNo2, iNo3) {
    if (iNo1 >= iNo2 && iNo1 >= iNo3) {
        return iNo1;
    }
    else if (iNo2 >= iNo1 && iNo2 >= iNo3) {
        return iNo2;
    }
    else {
        return iNo3;
    }
}
function main() {
    var iValue1 = 0;
    var iValue2 = 0;
    var iValue3 = 0;
    var iRet = 0;
    console.log("Enter first number : ");
    iValue1 = parseInt(readlineSync.question());
    console.log("Enter second number : ");
    iValue2 = parseInt(readlineSync.question());
    console.log("Enter third number : ");
    iValue3 = parseInt(readlineSync.question());
    iRet = Maximum(iValue1, iValue2, iValue3);
    console.log("Largest number is : ".concat(iRet));
}
main();
