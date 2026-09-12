let tea=["chai","green tea","herbal tea","black tea"];
let preferredTeas=[];

for(const c of tea){
      if(c==="herbal tea") continue;
      preferredTeas.push(c);
}
console.log(preferredTeas);
