//find even and odd for number between 1 and 10 using switch
a = 71;
switch(a){
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        console.log("Odd");
        break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
        console.log("Even");
        break;
    default:
        console.log("Please enter number between 1 and 10");
}