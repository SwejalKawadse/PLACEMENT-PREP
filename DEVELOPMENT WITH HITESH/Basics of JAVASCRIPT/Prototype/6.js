class Vehicle{
    constructor(type,cost){
        this.type=type;
        this.cost=cost;
    }

    getDetails(){
        return `The type of the toy is : ${this.type} and the cost of the toy is : ${this.cost}`;
    }
}

class Chintu extends Vehicle{
    

    printDetails(){
        return `the toys that I have is of type : ${this.type} which costs : ${this.cost}`;
    }
}

let car = new Chintu("car",100000);
console.log(car.printDetails());


let bike=new Vehicle("Bike",200);
console.log(bike.getDetails());
