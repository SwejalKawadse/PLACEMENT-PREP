let citiesPopulation={
    "London":890,
    "New York":840,
    "Paris":220,
    "Berlin":350
}

let cityPopulations={};

console.log(Object.keys(citiesPopulation));
console.log(Object.values(citiesPopulation));



for(const c in citiesPopulation){
    if(c==="Berlin") break;
    cityPopulations[c]=citiesPopulation[c];
}
console.log(cityPopulations);
