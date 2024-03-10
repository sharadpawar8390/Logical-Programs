"use strict";
// Count the digits
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function CountDigits(iNo) {
    var iCnt = 0;
    while (iNo !== 0) {
        iNo = Math.floor(iNo / 10);
        iCnt++;
    }
    return iCnt;
}
function main() {
    var iValue = 0;
    var iRet = 0;
    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());
    iRet = CountDigits(iValue);
    console.log("Number of digits are : ".concat(iRet));
}
main();
