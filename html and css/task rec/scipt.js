 const searchform = document.querySelector('form');
 const result = document.querySelector('.result');
 const allcontainer = document.querySelector('.allcontainer');
 let searchQ = '';
 
 searchform.addEventListener('submit', function(e){
     e.preventDefault();
     searchQ=e.target.querySelector('input').value;
     console.log(searchQ)
     fetchApi();
 } )
 async function fetchApi(){
    const BUrl=`https://api.spoonacular.com/recipes/complexSearch?query=${searchQ}&apiKey=a8545f24592948b4b90fe021d8044041`;
    const response = await fetch(BUrl)
    const data=await response.json();
    console.log(data)
    genHTML(data)    
 }
 function genHTML(resu){
     let gendHTML="";
     console.log(resu.totalResults)
   if(resu.totalResults!=0) {
    resu.results.map(result =>{
        gendHTML+=`
        <div class="card">
        <a href="" class="recipe"> 
                <div class="food_image" style="background-image: url(${result.image});"></div>
                <div class="cardcontent">
                    <div class="title">${result.title}</div>
                    <!--<div class="info">calories:${result.calories}<br>carbs:${result.carbs}<br>fat:${result.fat}</div>-->
                    <div class="view_recipe">view recipe</div>
                </div>
            </a>
            </div>
    `
        
        console.log(result)
    })
}
else{
    gendHTML+=`<h1>NO RESULT FOUND!<\h1>`
}
    result.innerHTML=gendHTML;
}