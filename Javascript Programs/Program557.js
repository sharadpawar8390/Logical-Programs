"use strict";
// Accept number from user and return its reverse number(ex 1234 = 4321)
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Reverse(iNo) {
    var iRev = 0;
    var iDigit = 0;
    while (iNo !== 0) {
        iDigit = iNo % 10;
        iNo = Math.floor(iNo / 10);
        iRev = (iRev * 10) + iDigit;
    }
    return iRev;
}
function main() {
    var iValue = 0;
    var iRet = 0;
    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());
    iRet = Reverse(iValue);
    console.log("Reverse number is : ".concat(iRet));
}
main();
