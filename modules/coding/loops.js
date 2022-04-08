
// loop 5 times (from 0 to 4)
console.log("for (var i = 0; i < 5; i++) {...")
for (var i = 0; i < 5; i++) {

  console.log("Itterator i: " + i);
}

console.log("\nvar i = 0;\nwhile(i < 7){...");

// loop 7 times (from 0 to 6)
var i = 0;

while(i < 7){

  console.log("Itterator i: " + i);

  i++ //itterate i
}

console.log("\n")

// loop for 2 seconds
var start_time = Date.now();

console.log("while(Date.now() < (start_time + 1000)) {...")
while(Date.now() < (start_time + 1000)) {

  // contnue looping for 1 second
  // Date.now() < (start_time + 1000)
}

console.log("finiished 1 second while loop wait\n");

console.log("char_array = ['a', 'b', 'c'];")
var char_array = ['a', 'b', 'c'];

console.log("char_array.forEach(function(element){")
char_array.forEach(function(element){

  console.log(element);
});
