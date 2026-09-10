let tea=["green tea","black tea","chai","oolong tea"];
let selectedTeas=[];
for(let i=0;i<tea.length;i++){
    if(tea[i]==="chai") break;
    selectedTeas.push(tea[i]);
}
console.log(selectedTeas);
