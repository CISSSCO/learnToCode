const arr = ["Cisco", "Ramon", "Ram"];
console.log(arr);
// arr = ["Abhi", "Raj"];       //this will not work bcz arr is const
arr[0] = "Abhi";
arr[1] = "Raj";
console.log(arr);

arr.pop();
console.log(arr);