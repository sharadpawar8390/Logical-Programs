"use strict";
// Display numbers given by user.(ex.from 1 to given number)
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Display(iNo) {
    var iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        console.log("".concat(iCnt, "\t"));
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
