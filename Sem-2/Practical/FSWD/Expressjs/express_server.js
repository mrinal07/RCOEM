var express = require("express");

var app = express();

app.get("/", function (req, res) {
  res.end("Welcome to Home Page");
});

app.get("/PassingData/:who", function (req, res) {
  res.end("Welcome " + req.params.who);
});

app.get("/about", function (req, res) {
  res.end("Welcome to About Page");
});

app.get("/contact", function (req, res) {
  res.end("Welcome to Contact Page");
});

app.use(function (req, res) {
  res.statusCode = 404;
  res.end("404 Not found");
});

app.listen(5000);
console.log("Expressjs Server on port no. 5000");
