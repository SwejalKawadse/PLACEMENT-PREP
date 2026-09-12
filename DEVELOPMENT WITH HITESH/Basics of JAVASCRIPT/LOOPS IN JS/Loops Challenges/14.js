let teas=["chai","green tea","black tea","jasmine tea","herbal tea"];
let shortTeas=[];

for(const c of teas){
    if(c.length>10) break;
    shortTeas.push(c);
}

console.log(shortTeas);
