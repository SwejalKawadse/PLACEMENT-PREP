let cloths={
cost:1000,
fabric:"cotton"
};

let saree={
    type:"designer",
    __proto__:cloths,
}

console.log(`Saree : `,saree.__proto__);
console.log(saree.cost);

