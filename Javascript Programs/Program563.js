"use strict";
// Display addition of all even numbers from the array.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function EvenAddition(Arr) {
    var iCnt = 0;
    var iSum = 0;
    for (iCnt = 0; iCnt < Arr.length; iCnt++) {
        if ((Arr[iCnt] % 2) == 0) {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
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
    var iRet = EvenAddition(array);
    console.log("The addition of even numbers is : ".concat(iRet));
    console.log("Dynamic memory deallocated successfully...");
}
main();
