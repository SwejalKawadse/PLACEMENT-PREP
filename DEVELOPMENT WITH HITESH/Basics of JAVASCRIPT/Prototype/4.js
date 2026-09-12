function Animal(name,sound){
  this.name=name;
  this.sound=sound;

 this.Showname=function(){
   console.log(`The name of the animal is : ${this.name}`);
  }

  this.Showsound=function(){
    console.log(`The sound which it makes is : ${this.sound}`);
  }
}

let x=new Animal("Bandar","RAM RAM");
(x.Showname());
(x.Showsound());