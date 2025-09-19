console.log("Hello World!!")
document.writeln("\nHello World")

console.log(a);
let a = 12;
if(a > 5)
{
    let a = 20;
    console.log("a = "+a);
}
console.log("hii = "+ a);
// function named info that takes age , name and branch and return hi! name age branch
const data = (age , name , branch) =>
{
    return `\nHi! I am ${name}.\nI am ${age} years old.\nI belong to ${branch} branch.`;
}
console.log(data(21 , "Ashirwad Mishra" , "CSE"));

const info = () =>
{
    return `\nHi! I am Ashirwad.\nI am 21 years old.\nI belong to CSE branch.`;
}
info()

function info(str = "Hiii")
{
    console.log("Hello "+ str);
}
info();
info("How are you.")

IIFE
(function info(params) {
    console.log("Hii Inside function")
})();
setTimeout(function () {
    console.log("Hii");
},1000);

function selectLanguage(language = "Python") 
{
    let data;
    if (language == 'Java') {
        function javaCompiler(params) {
            return "Java language selected.";
        }
        data = javaCompiler();
    }    
    else if(language == 'C++')
    {
        function CppCompiler(params) {
            return "C++ language selected.";
        }
        data = CppCompiler();
    }
    else
    {
        data = "language not supported.";
    }
    return data;
}

console.log(selectLanguage("Java"))
console.log(selectLanguage("C++"))
console.log(selectLanguage("Python"))
console.log(selectLanguage())