let visitedCities=[];
let cities=["London","New York","Paris","Berlin"];
for(let i=0;i<cities.length;i++){
    if(cities[i]=="Paris") continue;
    visitedCities.push(cities[i]);
}
console.log(visitedCities);
