const btn1 = document.getElementById('btn1');
console.log(btn1);

function longData() 
{
    console.log("Start");
    for (let i = 0; i < 10000; i++) 
        {
            console.log(i);
        }
    console.log("End");
}
btn1.addEventListener('click', longData);

welComeToJs = () =>
{
    console.log("Welcome to Js");
}
console.log("start");
setTimeout(welComeToJs, 1000);
console.log("End");

function msg1(arg) 
{
    console.log("Hello " + arg + " Welcome to ABES EC")
}

function msgHandler(arg , callback) 
{
    const data = callback(arg);
    console.log(data);    
}

const arr = ["Amit" , "Rahul" , "vansh"];

arr.forEach(ele => {
    msgHandler(ele , msg1);
})
// Pyramid of doom
setTimeout(() => {
    console.log("First message");
    setTimeout(() => {
        console.log("Second message");
        setTimeout(() => {
            console.log("Third message");
            setTimeout(() => {
                console.log("Forth message");
            }, 1000);
        }, 1000);
    }, 1000);
}, 1000);

// Promise
const myPromise = new Promise((resolve , reject) =>{
    const passWord = "Abracadabra";
    if (passWord.length > 8)
    {
        resolve("Password is accepted or valid");
    }
    else 
    {
        reject("password is rejected");
    }
});
// Promise chaining
myPromise.then(
    msg => {
        console.log(msg);
    }
).catch(
    err => {
        console.log(err);
    }
).finally(
    msg => {
        console.log("Finally the resources got freed");
    }
)

console.log(myPromise);
// Async await
async function promiseHandler() {
    try
    {
        const data = await myPromise;
    }
    catch (err)
    {
        console.log(err);
    }
}
promiseHandler();

// Fetch apis

async function fetchData() {
  const response = await fetch("https://fakestoreapi.com/products");
  const jsonData = await response.json();
  console.log(jsonData[0]); 

  let div2 = document.getElementsByClassName("fetchPro")[0];

  // create table structure
  div2.innerHTML = `
    <table border="1">
      <thead>
        <tr>
          <th>Id</th>
          <th>Name</th>
          <th>Price</th>
          <th>Photo</th>
          <th>Desription</th>
        </tr>
      </thead>
      <tbody></tbody>
    </table>
  `;

  let tbody = div2.querySelector("tbody");

  // loop through all products
  jsonData.forEach(product => {
    let row = document.createElement("tr");
    row.innerHTML = `
      <td>${product.id}</td>
      <td>${product.title}</td>
      <td>${product.price}</td>
      <td><img src="${product.image}" width="50"></td>
      <td>${product.description}</td>
    `;
    tbody.appendChild(row);
  });
}

const btn2 = document.getElementById("btn2");
btn2.addEventListener("click" , fetchData);