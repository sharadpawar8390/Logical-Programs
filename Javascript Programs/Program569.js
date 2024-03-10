"use strict";
// Display * number of times given by user.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Display(iNo) {
    var iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        console.log("*\t");
    }
    console.log();
}
function main() {
    var iValue = 0;
    console.log("Enter the count : ");
    iValue = parseInt(readlineSync.question());
    Display(iValue);
}
main();
