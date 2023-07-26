let quote = "Ram and ram eat a raM mango Ram";
let text = "I am Cisco Ramon";

// let fullName = text.slice(5);
console.log(quote.slice(4,0));
console.log(quote.slice(4,8));
console.log(quote.substring(8,-1));
console.log(quote.substring(8));
console.log(quote.slice(0,2));
console.log(quote);
console.log(text.slice(5));
console.log(text);
// console.log(fullName);
console.log(quote.substr(4, 4));
console.log(quote.substr(4));

//trim
let fullName = "     Cisco Ramon    ";
console.log(fullName.trim());
console.log(fullName.trimStart());
console.log(fullName.trimEnd());
console.log(fullName);

//replace
// let quote = "Ram and ram eat a raM mango Ram";
console.log(quote.replace(/Ram/g, "Cisco"));
console.log(quote.replace(/Ram/i, "Cisco"));
console.log(quote.replace(/Ram/gi, "Cisco"));

console.log(quote);
console.log(quote.replaceAll(/Ram/gi, "Ramon"));
console.log(quote.replace(/Ram/gi, "Cisco"));


