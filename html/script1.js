function validateForm()
{
var email=document.myForm.email.value;
   var emailRegex =/^[^\s@]+@[^\s@]+\.[^\s@]+$/;
   if(email === "" || email === null)
   {
       alert("enter Email!!")
       var firstNameField = document.getElementById("email");
       firstNameField.focus();
       return false;
   }
   else if (!emailRegex.test(email))
   {
       alert("enter valid Email !!")
       var firstNameField = document.getElementById("email");
       firstNameField.focus();
       return false;
   }
   alert("REGISTERATION SUCCESSFULL!");
   return true;
}
