# Contact Book

 This is a Project based on C language Core chapters, which i made during my *BCA 1st year*. The main
 objective of this project is to practically implement the core concepts of C programming.

## Features : 
This application features a user-friendly console menu that allows user to perform the following 
operations:
* When program starts it will show all contacts which are saved in Contact Book.
  
* Add Contact: In this function we can add contact, It will ask details Name, Phone number,  We have option to
save it permanent to contact book or to put in temporary file. We can access this contact at running time that will
help to consume less memory or not to save temporary contact and use it one time.

* Display Contacts which are saved in running program : It will show only that numbers which are saved
  temporarily in programming or running time saved contacts.

* Search contact : We can search contact by giving name of contact. This can search both contacts which
are in temporary or saved contacts.

* To Load all Contacts - This function will show all contacts which are saved in Contact Book.

* Save Contact : In this function we can save contact by adding details. It will ask Name and Number
 then it will be automatic saved to contact book.

* Exit : To exit from this program user have to choose this function.

### Concepts Used :

To make this project modular, efficient, and clean, I utilized the following C languages concepts : 

* **Structures (`struct`):** Used to group different attributes of a contact (Name, Phone) into a single entity.
* **File Handling (`fopen`, `fwrite`, `fread`, `fclose`):** Implemented to permanently store and
* retrieve contact records from the hard drive.
* **Functions:** Created dedicated functions for each feature (Add, Search, Display, Save) to maintain
* modular and clean code.
* **Control Flow & Loops:** Used `Switch Case` and `While` loops to build a seamless, menu-driven
* user experience.
* **String Handling:** Employed string functions to compare, search, and validate names and contact
*  inputs.

---

## 💻 How to Run
1. Download or clone the `.c` source file from this repository.
2. Open the file in **Visual Studio** or any standard C Compiler (e.g., Code::Blocks, Dev-C++).
3. Compile and run the code. In Visual Studio, press **`Ctrl + F5`** to execute.

---
**Developed by:** Abhay Singh  
*BCA Student | C Language Developer*
