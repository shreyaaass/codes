const form = document.getElementById('form');
const htmlresult=document.getElementById('result_id')
form.addEventListener('submit', function (e) {
    e.preventDefault();
    var name = document.getElementById('name').value;
    var singer = document.getElementById('singer').value;
    var genre = document.getElementById('genre').value;
    var link = document.getElementById('link').value;

    fetch("https://mfc-song-api.herokuapp.com/api/songs/", {
        method: 'POST',
        body: JSON.stringify({
            "name": name,
            "singer_name": singer,
            "genre": genre,
            "youtube_link": link,
        }),
        headers: {
            "Content-Type": "application/json",
        },
    }).then((response) => {
        return response.json();
    }).then((data) => {
        console.log(data);
    })
});
const search = document.getElementById('search_form');
let searchQ = '';
search.addEventListener('submit', function (e) {
    e.preventDefault();
    searchQ = e.target.querySelector('input').value;
    console.log(searchQ)
    fetchApi();

})
async function fetchApi() {
    const BUrl = "https://mfc-song-api.herokuapp.com/api/songs?singer_name=" + searchQ;
    const response = await fetch(BUrl)
    const data = await response.json();
    console.log(data)
    genHTML(data)  
}
function genHTML(resu){
    let gendHTML="";
    c=0
    console.log(resu.length)
  if(resu.length!=0) {
   resu.map(e =>{
       c=c+1;
       gendHTML+=`
      <div class="info">
        <div class="card" >
        <h2>${c}</h2>
            <div class="card-content">
            <h3>song:${e.name}</h3>
            <h3>singer:${e.singer_name}</h3>
            <h3>genre:${e.genre}</h3>
            <h3>link:${e.youtube_link}</h3>
            </div>
        </div>
      </div>
      <br>
      <br>
      `
       
    console.log(resu)
   })
}
else{
   gendHTML+=`<h1>NO RESULT FOUND!<\h1>`
}
   htmlresult.innerHTML=gendHTML;
}