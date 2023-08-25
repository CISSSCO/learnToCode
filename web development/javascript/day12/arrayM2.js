let a = ["cisco", "ramon", "ram", "raj", "abhi"];
console.log(a.length);

console.log(a.toString());

let b = a.toString();
console.log(b);
console.log(typeof b);

//join
let c = a.join(" ");
console.log(c);
console.log(typeof c);

let d = c.split(" ");
console.log(d);
console.log(typeof d);

let e = d.join("|");
console.log(e);
console.log(typeof e);