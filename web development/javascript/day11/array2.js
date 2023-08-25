const a = [
                "Cisco", 
                "Ramon",
                "Raj" 
            ];

const students = {
    firstName : "Cisco", 
    lastName : "Ramon",
    age : 23
};

students["phone"] = 234234234;
console.log(typeof a);
console.log(typeof students);

console.log(Array.isArray(a));
console.log(Array.isArray(students));

console.log(a.length);
console.log(students.length);

//if you want to find the length of the students object
console.log(Object.keys(students).length);
console.log(Object.keys(students));
console.log(Array.isArray(Object.keys(students)));