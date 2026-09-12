let worldCities={
    "Sydney":500,
    "Tokyo":900,
    "Berlin":350,
    "Paris":220
};

let largeCities={};

for(const c in worldCities){
    if(worldCities[c]<300) continue;
    largeCities[c]=worldCities[c];
}
console.log(largeCities);