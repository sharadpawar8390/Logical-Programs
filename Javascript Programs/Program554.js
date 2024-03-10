"use strict";
// To check number is a prime number or not.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function CheckPrime(iNo) {
    var bFlag = true;
    if (iNo < 0) {
        iNo = -iNo;
    }
    for (var iCnt = 2; iCnt <= iNo / 2; iCnt++) {
        if (iNo % iCnt === 0) {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}
function main() {
    var iValue = 0;
    var bRet = false;
    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());
    bRet = CheckPrime(iValue);
    if (bRet) {
        console.log("".concat(iValue, " is a prime number"));
    }
    else {
        console.log("".concat(iValue, " is not a prime number"));
    }
}
main();
