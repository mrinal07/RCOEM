var fs = require("fs");

//  code for blocking IO

console.log("Blocking IO Demo Start");
var data = fs.readFileSync("SampleFile.txt");
console.log(data.toString());
console.log("Blocking IO Demo End");

//  code for non-blocking IO

console.log("Non-Blocking IO Demo Start");
fs.readFile("SampleFile.txt", function (err, data) {
  if (err) return console.log(err);
  console.log(data.toString());
});

console.log("Non-Blocking IO Demo End");
