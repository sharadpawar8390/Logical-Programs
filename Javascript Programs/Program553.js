"use strict";
// To check number is perfect or not.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function CheckPerfect(iNo) {
    var iCnt = 0;
    var iSum = 0;
    if (iNo < 0) {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++) {
        if (iNo % iCnt === 0) {
            iSum += iCnt;
        }
    }
    return iSum === iNo;
}
function main() {
    var iValue = 0;
    var bRet = false;
    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());
    bRet = CheckPerfect(iValue);
    if (bRet) {
        console.log("".concat(iValue, " is a perfect number"));
    }
    else {
        console.log("".concat(iValue, " is not a perfect number"));
    }
}
main();
