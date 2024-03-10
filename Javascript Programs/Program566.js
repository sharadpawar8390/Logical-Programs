"use strict";
// Display maximum number from the array.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Maximum(Arr) {
    var iCnt = 0;
    var iMax = Arr[0];
    for (iCnt = 0; iCnt < Arr.length; iCnt++) {
        if (Arr[iCnt] > iMax) {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
function main() {
    var iCount = 0;
    var array = [];
    console.log("Enter the number of elements that you want to enter : ");
    iCount = parseInt(readlineSync.question());
    console.log("Dynamic memory gets allocated successfully for ".concat(iCount, " elements"));
    console.log("Enter the ".concat(iCount, " values : "));
    for (var iCnt = 0; iCnt < iCount; iCnt++) {
        console.log("Enter the elements no ".concat(iCnt + 1, " : "));
        array.push(parseInt(readlineSync.question()));
    }
    var iRet = Maximum(array);
    console.log("The maximum number is : ".concat(iRet));
    console.log("Dynamic memory deallocated successfully...");
}
main();
