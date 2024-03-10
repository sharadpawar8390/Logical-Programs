"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var readlineSync = require("readline-sync");
function CalculateArea(fValue) {
    var PI = 3.14;
    var fAns = 0.0;
    fAns = PI * fValue * fValue;
    return fAns;
}
function main() {
    var fRadius = 0.0;
    var fArea = 0.0;
    console.log("Enter the radius of the circle : ");
    fRadius = parseFloat(readlineSync.question());
    fArea = CalculateArea(fRadius);
    console.log("Area of the circle is : ", fArea);
}
// Call the main function
main();
