const container = document.getElementsByClassName('container');
console.log(container);
container[0].innerHTML = '<h1 style = color:cyan>Welcome to ABESEC</h1>'

const h2 = document.createElement('h2');
h2.innerText = "Computer science and engineering";
h2.style.color = "Red";
h2.style.border = "1px solid black";
h2.style.borderRadius = "20%";
container[0].append(h2);

const img = document.createElement('img');
img.src = "https://th.bing.com/th/id/OIP.E3UNwm389l_qdOdJ6zbhCAHaE8?w=240&h=180&c=7&r=0&o=7&dpr=1.3&pid=1.7&rm=3"
img.alt = "ABESEC";
img.style.width = "200px";
img.style.height = "150px";
img.style.border = "2px solid black";
img.style.borderRadius = "10%";
container[0].append(img);

const btn1 = document.getElementById('btn1')
console.log(btn1)

function displayData() {
    console.log("Haaaaayaaaaaaa");
}

btn1.addEventListener('click' , displayData);