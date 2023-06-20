//these all are number except e
a = 5;
b = 7;
c = 10.62;
c1 = 20.63;
d = -342;
e = "234";  //not a number - it is a string
f = 234;    //this is a number
g = 1 / 0;
h = -1 / 0;
// let i = new Number(234);
// console.log(typeof i);

console.log(typeof(e / a));
console.log(a / e);
console.log(e * a);
console.log(e - b);
console.log(a + b);
console.log(a / b);
console.log(a + b + e);     //57234 wrong - this is right 12234
console.log(e + b + a);     
console.log(c + c1);
console.log(a + b + c);
console.log(e + f);
console.log(typeof(e + f));
firstName = "Cisco ";
lastName = "Ramon";
console.log(firstName + lastName);  //here + operator is used to concatenate two string
console.log(g);
console.log(h);
console.log(a / firstName);
console.log(typeof (a / firstName));
