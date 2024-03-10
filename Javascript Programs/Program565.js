"use strict";
// Display addition of all odd numbers from the array.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Average(Arr) {
    var iCnt = 0;
    var iSum = 0;
    for (iCnt = 0; iCnt < Arr.length; iCnt++) {
        iSum = iSum + Arr[iCnt];
    }
    return iSum / Arr.length;
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
    var iRet = Average(array);
    console.log("The average is : ".concat(iRet));
    console.log("Dynamic memory deallocated successfully...");
}
main();
