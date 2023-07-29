let quote = "Ram and ram eat a raM mango Ram";
let text = "I am R Cisco Ramon";

//include in string
console.log(quote.includes("mango"));
console.log(quote.includes("ram"));
console.log(quote.includes("a"));
console.log(quote.includes("ra"));
// console.log(quote.length);
console.log(quote.includes("mango",23));
console.log(quote.includes("ango",23));

//indexOf   (searches start to end)
console.log(text.indexOf("C"));
console.log(text.indexOf("c"));
console.log(text.indexOf("R", 6));
console.log(text.indexOf('r'));

//lastIndexOf   (searches end to start)
// let text = "I am R Cisco Ramon";
console.log(text.lastIndexOf("R"));
console.log(text.lastIndexOf("R", 12));
console.log(text.lastIndexOf('r'));

//search    
console.log(text.search("Ram"));
console.log(text.search("ram"));
console.log(text.search(/ram/i));

//match     ()
let arr = quote.match("Ram");
let arrAll = quote.match(/Ram/g);
let arrAllCase = quote.match(/Ram/gi);
console.log(arr);
console.log(Array.from(arrAll));
console.log(arrAllCase);
console.log(arrAllCase.length);

//matchAll
let arrMatchAll1 = quote.matchAll("Ram");
let arrMatchAll2 = quote.matchAll(/Ram/gi);
console.log(Array.from(arrMatchAll1));
console.log(Array.from(arrMatchAll2));

//startWith
// let text = "I am R Cisco Ramon";
console.log(text.startsWith("I"));
console.log(text.startsWith("R",5));
console.log(text.startsWith("R",4));
console.log(text.startsWith("Cisco",7));

//endsWith
console.log(text.endsWith("n"));
console.log(text.endsWith("Cisco",11));
console.log(text.endsWith("Cisco",12));















