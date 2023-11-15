function is validEmail(email)
const emailRegex = [/^[^\s@]+@[^\s@]+\.[^\s@]+$/];
return emailRegex.test(email);
}
const email = ["example@example.com"];
if (isvalidEmail(email))
{
console.log("Email is valid.");
}
else
{
console.log("Email is invalid.");
}

