a = 12312.234234234234;
console.log(a);
console.log(a.toFixed(2));
console.log(a.toFixed(5));


b = 20.2467893;
console.log(b.toPrecision(5));
console.log(a.toExponential());
console.log(a.toString());
c = a.toString();
console.log(typeof(c));

console.log(Number.MAX_VALUE);
console.log(Number.MIN_VALUE);
console.log(Number.POSITIVE_INFINITY);
console.log(Number.NEGATIVE_INFINITY);
console.log(Number.isInteger(10.234));
console.log(Number.parseInt(10.234));
console.log(Number.parseFloat("10.234"));
newfloat = Number.parseFloat("10.234234");
console.log(typeof(newfloat));

console.log(Number("10234") + 123);
console.log(Number("10"));
console.log(Number("10.23"));
console.log(Number("10.23   "));
console.log(Number("   10.23   "));
console.log(Number("1123%23"));
console.log(Number("1123  23"));
console.log(Number(10 / "Cisco"));