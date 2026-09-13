document.getElementById("changeTextButton").addEventListener("click",function(){
    let para=document.getElementById("myParagraph");
    para.textContent="Changed the text on clicking";
})


document.getElementById("highlightFirstCity").addEventListener("click",function(){
    let city=document.getElementById("citiesList").firstElementChild;
    city.classList.add("highlight")
;})