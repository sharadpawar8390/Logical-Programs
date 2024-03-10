"use strict";
// Display count of even numbers from the array.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function EvenCount(Arr) {
    var iEvenCnt = 0;
    console.log("\n Even Elements of the array are : ");
    for (var iCnt = 0; iCnt < Arr.length; iCnt++) {
        if ((Arr[iCnt] % 2) == 0) {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
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
    var iRet = EvenCount(array);
    console.log("Number of even elements are : ".concat(iRet));
    console.log("Dynamic memory deallocated successfully...");
}
main();
