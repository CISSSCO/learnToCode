const students = ["Cisco", "Ramon", "Abhi"];
const student = ["Cisco", "Ramon", 23, 234234234];
console.log(typeof students);
console.log(typeof student);

//accessing elements of the array
console.log(typeof students[0]);
console.log(students[1]);
console.log(students[2]);

console.log(student[1] + " " + typeof student[1]);
console.log(student[2] + " " + typeof student[2]);

//length of array is the total number of elements inside the array
console.log(student.length);
console.log(student[student.length - 1]);