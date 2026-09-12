let num=[1,2,3,4,5];
let smallNumbers=[];

for(const c of num){
    if(c==4) break;
    smallNumbers.push(c);
}
console.log(smallNumbers);
