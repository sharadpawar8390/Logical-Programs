"use strict";
// Accept number from user and display its factors.
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function DisplayFactors(iNo) {
    console.log("Factors of ".concat(iNo, " are :"));
    for (var iCnt = 1; iCnt <= iNo / 2; iCnt++) {
        if (iNo % iCnt === 0) {
            console.log(iCnt);
        }
    }
}
function main() {
    var iValue = 0;
    console.log("Enter the number : ");
    iValue = parseInt(readlineSync.question());
    DisplayFactors(iValue);
}
main();
