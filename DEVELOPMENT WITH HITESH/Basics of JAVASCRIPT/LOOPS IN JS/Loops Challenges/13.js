let cities=["Berlin","Tokyo","Sydney","Paris"];
let traveledCities=[];

cities.forEach(function (city){
    if(city==="Sydney"){
        return;
    }
    traveledCities.push(city);
})
console.log(traveledCities);
