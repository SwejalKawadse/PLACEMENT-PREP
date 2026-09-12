function orderTea(teaType){
    function confirmOrder(){
             return `Order confirmed for ${teaType} tea`;
    }
    return confirmOrder("Black");
}

let order=orderTea("Black");
console.log(order);
