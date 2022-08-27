const fs = require("fs");

const content = "Some random content!";

fs.writeFile("SampleFile.txt", content, (err) => {
  if (err) {
    console.error(err);
  }
  console.log("SampleFile.txt written successfully");
});
