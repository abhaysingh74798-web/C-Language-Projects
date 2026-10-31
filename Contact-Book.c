// Q49. Mini-project: create a contact book with name and phone number. Support add, display, search by
// name, and file save/load using structures, strings, functions, and file handling.
// Concepts / chapters: Mixed: all core chapters strings

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct contact{
    char name[20];
   char no[11];
};

int add(struct contact c[], int *count);
void display(struct contact c[], int count);
void find(struct contact c[], int count);
void save();
void loadall(struct contact c[], int count);


int main() {

    struct contact c[10];
    int n=0, count=0;
    loadall(c, count);

    while(n != 6){
    printf("1-> Add Contact <-\n");
    printf("2-> Display Contact which are saved in running program <-\n");
    printf("3-> Search contact <-\n");
    printf("4-> To load all Contacts <-\n");
    printf("5 -> Save Contact <-\n");
    printf("6-> To Exit ->>>\n\n");
    printf("Select any one option : ");
    scanf("%d", &n);

    switch(n){
        case 1 : 
            add(c, &count);
            break;

        case 2 : 
            display(c, count);
            break;

        case 3 : 
            find(c, count);
            break;

        case 4 : 
            loadall(c, count);
            break;

        case 5 : 
            save();

        case 6 :
            break;

        default : 
        printf("Invalid input\n");
        break;
    }
    }
    
return 0;
}


int add(struct contact c[], int *count){

    // int check;

    printf("Enter name : ");
    scanf("%s", c[*count].name);
    printf("Enter Contact no : ");
    scanf("%10s", c[*count].no);

//    printf("1-> Do you want to save no, press 1 <- or 0 <-");
//    scanf("%d", &check);

    (*count)++;

   return 0;
}


void display(struct contact c[], int count) {

    for(int i=0; i<count; i++){
        printf("Name is %s\n", c[i].name);
        printf("No is %s\n\n", c[i].no);
    }
}

void find(struct contact c[], int count){
    char search[20];
    int found=0;
    printf("Enter name to search : ");
    scanf("%s", search);

    for(int i=0; i<count; i++){
        if((strcmp(search, c[i].name)) == 0){
            printf("Name is %s\n", c[i].name);
            printf("No is %s\n", c[i].no);
            found =1;
            break;
        }
    }

    // if(found == 0){
    //     printf("Not found in Contact book : \n");
    // }

    FILE *fptr;
    fptr = fopen("Contact.txt", "r");

    char naaam[20];
    char pno[11];

    if(found == 0){

    while(fscanf(fptr, "%s %s", naaam, pno) == 2){
        if((strcmp(search, naaam)) == 0){
            printf("Name is %s\n", naaam);
            printf("No is %s\n", pno);
            found =1;
            break;
        }
    }
}

    fclose(fptr);

    if(found == 0){
        printf("Student not found\n");
    }
}

void save(){

    char naam[20];
    char pn[11];

    printf("Enter name : ");
    scanf("%s", naam);

    printf("Enter Contact no : ");
    scanf("%s", pn);

    FILE *fptr;
    fptr = fopen("Contact.txt", "a");

    fprintf(fptr, "%s ", naam);
    fprintf(fptr, "%s\n", pn);

    fclose(fptr);

}

void loadall(struct contact c[], int count){
        FILE *fptr;
    fptr = fopen("Contact.txt", "r");

    char naaam[20];
    char pno[11];

    while(fscanf(fptr, "%s %s", naaam, pno) != EOF){
            printf("Name is %s\n", naaam);
            printf("No is %s\n\n", pno);
        }


    fclose(fptr);

        for(int i=0; i<count; i++){
        printf("Name is %s\n", c[i].name);
        printf("No is %s\n\n", c[i].no);
    }


}
