let a = ["cisco", "ramon", "ram", "raj", "abhi"];

//push
//adds a value at the end of the array

a.push("raza");
a.push("rishi");
a.push("rishav");
a.push("madhav");

console.log(a);


//pop
let popValue = a.pop();
console.log(popValue);
console.log(a);

//push returns the length of the newly formed array
let newArrayLength = a.push("shivay");
console.log(a);
console.log(newArrayLength);
