let computer ={
    ram:8,
    processor:"i5",
    cost:58000
};

let lenovo={
    gaming:"Yes",
};

Object.setPrototypeOf(lenovo,computer);

console.log(Object.getPrototypeOf(lenovo));
console.log(lenovo.gaming);
console.log(lenovo.processor);

