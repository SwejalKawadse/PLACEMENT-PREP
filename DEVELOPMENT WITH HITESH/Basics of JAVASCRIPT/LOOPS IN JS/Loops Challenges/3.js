const prompt=require('prompt-sync')();

let tea;
let teaCollection=[];

do{
    tea=prompt("Enter your fav tea type : "); 

    if(tea!=="stop"){
    teaCollection.push(tea);
    } 
}
while(tea!=="stop");

console.log(teaCollection);
