class Payment {
    pay(amount) {
        console.log("Processing payment");
    }
}

class CreditCard extends Payment {
    pay(amount) {
        console.log("Paid ₹" + amount + " using Credit Card");
    }
}

class UPI extends Payment {
    pay(amount) {
        console.log("Paid ₹" + amount + " using UPI");
    }
}

class Cash extends Payment {
    pay(amount) {
        console.log("Paid ₹" + amount + " using Cash");
    }
}

let creditCard = new CreditCard();
let upi = new UPI();
let cash = new Cash();

creditCard.pay(1000);
upi.pay(1000);
cash.pay(1000);