//includes
let a = ["cisco", "ramon", "ram", "raj", "abhi"];

// console.log(a.includes("ramon"));

// console.log(a.includes("shivay"));

//write a program to find a name in your dataset

// let n = "shivay";
let n = "shivay";

if(a.includes(n)){
    console.log("Found");
}
else{
    console.log("Not found");
}

//you can also do this using loop
let found = false;
for(let i = 0; i < a.length; i++){
    if(a[i] == n){
        found = true;
    }
}

if(found) console.log("found");
else console.log("Not found");


