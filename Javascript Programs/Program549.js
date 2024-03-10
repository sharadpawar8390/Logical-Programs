"use strict";
// Accept number from user and print number from 1 on screen(ex 1 to 10)
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Display(iNo) {
    for (var iCnt = 1; iCnt <= iNo; iCnt++) {
        console.log(iCnt);
    }
}
function main() {
    var iValue = 0;
    console.log("Enter number of times you want to display on screen : ");
    iValue = parseInt(readlineSync.question());
    Display(iValue);
}
main();
