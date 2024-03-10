"use strict";
// To accept number from user and display its sum of factors.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function SumFactors(iNo) {
    var iSum = 0;
    for (var iCnt = 1; iCnt <= iNo / 2; iCnt++) {
        if (iNo % iCnt === 0) {
            iSum += iCnt;
        }
    }
    return iSum;
}
function main() {
    var iValue = 0;
    var iRet = 0;
    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());
    iRet = SumFactors(iValue);
    console.log("Sum of factors is : ".concat(iRet));
}
main();
