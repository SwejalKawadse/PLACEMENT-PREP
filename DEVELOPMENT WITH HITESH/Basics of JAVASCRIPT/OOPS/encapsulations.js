class BankAccount{

    #amount=10000;

    #CalculatIntrest(){
          return this.#amount*0.04;
    }

    ShowAmount(){
          return (`The total intrest amount is : ${this.#CalculatIntrest()}`);
          
    }
}

let Axis=new BankAccount();
console.log(Axis.ShowAmount());
