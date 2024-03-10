"use strict";
// Sum of the digits
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function SumDigits(iNo) {
    var iSum = 0;
    while (iNo !== 0) {
        iSum = iSum + (iNo % 10);
        iNo = Math.floor(iNo / 10);
    }
    return iSum;
}
function main() {
    var iValue = 0;
    var iRet = 0;
    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());
    iRet = SumDigits(iValue);
    console.log("Sum of digits are : ".concat(iRet));
}
main();
