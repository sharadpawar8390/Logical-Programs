"use strict";
// Display frequency of given number by user from the array.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Frequency(Arr, iValue) {
    var iCnt = 0;
    var iFrequency = 0;
    for (iCnt = 0; iCnt < Arr.length; iCnt++) {
        if (Arr[iCnt] == iValue) {
            iFrequency++;
        }
    }
    return iFrequency;
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
    console.log("Enter the number you want to search : ");
    var iValue = parseInt(readlineSync.question());
    var iRet = Frequency(array, iValue);
    console.log("The frequency of given number is : ".concat(iRet));
    console.log("Dynamic memory deallocated successfully...");
}
main();
