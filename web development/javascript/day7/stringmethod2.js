let quote = "Ram and ram eat a raM mango Ram";
let text = "I am Cisco Ramon";
let fullName = "Cisco Ramon";
console.log(fullName[0]);
console.log(fullName[5]);
console.log(fullName[2]);
fullName[2] = "p";           //this will not work as strings are immutable
console.log(fullName[2]);
// fullName = "Abhishek Raj";   //this will work (you can replace the hole content of the string)
// console.log(fullName);

//split in js (this will convert a string into an array)
let name = fullName.split("");
// console.log(typeof name);

name[0] = "P";
console.log(name.length);

let a = "C,i,s,c,o";
a[2] = "p";
console.log(typeof a);
console.log(a);
let firstName = a.split(",");
console.log(firstName);
firstName[2] = "p";
console.log(firstName);
console.log(typeof firstName);

//concatenation using + operator
console.log(quote + " " + "He is a brave man" + " " + text);
//concat method
console.log(quote.concat(" ", "He is a brave man", " ", text));
console.log(fullName.concat(" "," is awesome"));

//toUppercase  
console.log(fullName.toUpperCase());
//toLowercase
console.log(fullName.toLowerCase());

//chatAt
console.log(fullName.charAt(0));
// console.log(fullName[0]);    //you can also do this instead
console.log(fullName.charAt(2));
// console.log(fullName[2]);
console.log(fullName.charAt(6));

//padStart padEnd
let sample = "C";
console.log(sample.padStart(3, " "));
let h = "hello";

console.log(h.padStart(2, " "));    //this will not work as maxlength is smaller than the length of the string
console.log(h.padStart(7, " "));
console.log(h.padEnd(11, " world"));
console.log("----- " + h.padEnd(11, " -----"));

