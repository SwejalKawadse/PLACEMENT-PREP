let car={
    make : "Toyota",
    model:"Fortuner",
    year:"2026",
    price:3400000,
    details:function(){
        return `${car.model} is made in ${car.year} by the company ${car.make} and at the price of : ${this.price}`;
    }
}

let MyNewCar=car.details();
console.log(MyNewCar);
