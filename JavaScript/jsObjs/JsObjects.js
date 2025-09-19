const student = 
{
    name : "Ram",
    age : 20,
    branch : "CSE-A",
    language : [
        {
            lang1 : "Java",
            lang2: "JavaScript"
        },
        {
            dataBase2 : "PostgreSQL",
            dataBase3 : "MongoDB"
        },
        {
            frameWork1 : "Hibernate",
            frameWork2 : "SpringBoot"
        }
    ]   
}
student.college = "ABES Engineering College";
console.log(student);
delete student.college;
console.log(student);
console.log("Name = "+student.name);
console.log("Age = "+student.age);
console.log("Branch = "+student.branch); 
console.log("language 2 = " + student.language[0].lang2);