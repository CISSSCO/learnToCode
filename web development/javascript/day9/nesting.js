//nesting
if(1){
    console.log("First statement in first condition running");
    if(1){
        console.log("First statement in Second condition running");
        console.log("Second statement in Second condition running");
        if(0){
            console.log("First statement in Third condition running");
        }
        else if(0){
            console.log("else if part First statement in Third condition running");
        }
        else{
            console.log("else part First statement in Third condition running");
        }
    }
    console.log("Second statement in first condition");
}

