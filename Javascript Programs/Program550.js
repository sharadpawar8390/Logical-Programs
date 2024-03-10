"use strict";
// Accept number from user and print * of that number on screen(ex *****)
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function Display(iNo) {
    for (var iCnt = 1; iCnt <= iNo; iCnt++) {
        console.log("*\t");
    }
}
function main() {
    var iValue = 0;
    console.log("Enter number of times you want to display on screen : ");
    iValue = parseInt(readlineSync.question());
    Display(iValue);
}
main();
