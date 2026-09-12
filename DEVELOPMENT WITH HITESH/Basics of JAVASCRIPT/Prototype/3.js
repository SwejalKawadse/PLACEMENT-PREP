function animal(name,sound){
    this.name=name;
    this.sound=sound;
}

animal.prototype.sound=function(){
    return `The sound which ${this.name} uses is ${this.sound}`;
}

let Dog=new animal("kitty","bhow bhow");
console.log(Dog);

let Cat=new animal("pillu","meow meow");
console.log(Cat);