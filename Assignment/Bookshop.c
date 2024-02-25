#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 5

typedef struct
{
    int bookID;
    char title[40];
    char author[40];
    double price;
    int quantity;
} Book;

void output(Book *booklist, int target);
void listBook(Book *booklist, int *size);
int removeBook(Book *booklist, int *size);
int addBook(Book *booklist, int *size);
int findBook(Book *booklist, int size, char *target_book, char *target_author);
int checker(char *target, char *data);
void updateBook(Book *booklist, int size);

int main()
{
    int choice, size = 0;//size is use to store the actual size of the booklist from time to time
    Book booklist[MAX];
    printf("NTU BOOKSHOP MANAGEMENT PROGRAM:\n");
    printf("1: listBooks()\n");
    printf("2: addBook()\n");
    printf("3: removeBook()\n");
    printf("4: findBook()\n");
    printf("5: updateBook()\n");
    printf("6: quit\n");
    do
    {
        int result = -1;
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("listBooks():\n");
                listBook(booklist, &size);
                break;
            case 2:
                printf("addBook():\n");
                result = addBook(booklist, &size);//use to determine the situation of adding the book into the bookList
                if(result == 1){
                        printf("The book has been added successfully\n"); //the message show after the book added successfully
                }else if(result == 2){
                        printf("The bookID has already existed! Unable to addBook()\n"); //the message show after the bookID has been found in the bookList
                }else if(result == 3){
                        printf("The bookshop is full! Unable to addBook()\n"); //the message show when the bookLists has reached its maximum capacity
                }
                break;
            case 3:
                printf("removeBook():\n");
                result = removeBook(booklist, &size);//given different situation about the list
                if(result == 0){
                    printf("The bookshop is empty\n");
                }else if(result == -1){
                    printf("The target book is not in the bookshop\n");
                }
                break;
            case 4:
                printf("findBook():\n");

                char target_book[40], target_author[40], blank[100], *p;// declare variables to hold the target

                printf("Enter the target book title:\n");
                fgets(blank, 100, stdin); if(p = strchr(blank, '\n')) *p = '\0';
                fgets(target_book, 40, stdin); if(p = strchr(target_book, '\n')) *p = '\0';
                printf("Enter the target author name:\n");
                fgets(target_author, 40, stdin); if(p = strchr(target_author, '\n')) *p = '\0';

                result = findBook(booklist, size, target_book, target_author);

                //print the target book out
                if(result >= 0){
                    printf("The target book is found\n");
                    output(booklist, result);
                }else{
                    printf("The target book is not found\n");
                }
                break;
            case 5:
                printf("updateBook():\n");
                updateBook(booklist, size);

                break;
        }
    }while(choice != 6);//this loop will iterate continuously until the choice is equal to 6


    return 0;
}

//to check two string whether are equal regardless the upper or lower letter
int checker(char * target, char *data){
    if(strlen(target) != strlen(data)){
        return 0;
    }else{
        int i;
        for(i = 0; i < strlen(data); i++){
            if(tolower(target[i]) != tolower(data[i])){
                return 0;
            }
        }

        return 1;
    }
}

//printing the data in a specific pattern
void output(Book *booklist, int target){
    printf("BookID: %d\n", booklist[target].bookID);
    printf("Book title: %s\n", booklist[target].title);
    printf("Author name: %s\n", booklist[target].author);
    printf("Book price: %.2f\n", booklist[target].price);
    printf("Quantity: %d\n", booklist[target].quantity);
}

void listBook(Book *booklist, int *size)
{
    int i;
    if(*size == 0){
        printf("The bookshop is empty\n"); //print this when the array is empty
    }
    else{
        //print the data one by one
        for(i = 0; i < *size; i++){
            output(booklist, i);
        }
    }
}

int addBook(Book *booklist, int *size) // lack of the function of sorting
{
    int i, id, j;
    char blank[100], *p; //use to store the blank before scanning the actual data -> to prevent bug
    printf("Enter bookID:\n");
    scanf("%d", &id); //use a variable to check whether the id has been added to the list or not

    //to check the bookList whether has reached its maximum capacity or not and store the rubbish data of the overflow data
    if(*size == MAX){
        char rub_title[40], rub_author[40];
        double rub_price;
        int rub_quantity;
        printf("Enter book title:\n");
        fgets(blank, 100, stdin); if(p = strchr(blank, '\n')) *p = '\0';
        fgets(rub_title, 40, stdin); if(p = strchr(rub_title, '\n')) *p = '\0';
        printf("Enter author name:\n");
        fgets(rub_author, 40, stdin); if(p = strchr(rub_author, '\n')) *p = '\0';
        printf("Enter price:\n");
        scanf("%lf", &rub_price);
        printf("Enter quantity:\n");
        scanf("%d", &rub_quantity);
        return 3;
    }

    //use the loop to check the exist of the id and also store the rubbish data of the repeated detail of the book
    for(i = 0; i < *size; i++){
        if(id == booklist[i].bookID){
            char rub_title[40], rub_author[40];
            double rub_price;
            int rub_quantity;
            printf("Enter book title:\n");
            fgets(blank, 100, stdin); if(p = strchr(blank, '\n')) *p = '\0';
            fgets(rub_title, 40, stdin); if(p = strchr(rub_title, '\n')) *p = '\0';
            printf("Enter author name:\n");
            fgets(rub_author, 40, stdin); if(p = strchr(rub_author, '\n')) *p = '\0';
            printf("Enter price:\n");
            scanf("%lf", &rub_price);
            printf("Enter quantity:\n");
            scanf("%d", &rub_quantity);
            return 2;
        }
    }

    //comparing the bookID in the ascending order if the size > 1
    for(int i = 0; i < *size; i++){
        //arrange bookId can be added in ascending order
        if(id < booklist[i].bookID){
            for(j = i + 1; j < (*size) + 1; j++){
                booklist[j].bookID = booklist[j - 1].bookID;
                strcpy(booklist[j].title, booklist[j - 1].title);
                strcpy(booklist[j].author, booklist[j - 1].author);
                booklist[j].price = booklist[j - 1].price;
                booklist[j].quantity = booklist[j - 1].quantity;
            }
            //getting the new book is the correct place
            booklist[i].bookID = id;
            printf("Enter book title:\n");
            fgets(blank, 100, stdin); if(p = strchr(blank, '\n')) *p = '\0';
            fgets(booklist[i].title, 40, stdin); if(p = strchr(booklist[i].title, '\n')) *p = '\0';
            printf("Enter author name:\n");
            fgets(booklist[i].author, 40, stdin); if(p = strchr(booklist[i].author, '\n')) *p = '\0';
            printf("Enter price:\n");
            scanf("%lf", &booklist[i].price);
            printf("Enter quantity:\n");
            scanf("%d", &booklist[i].quantity);
            (*size)++; // adding the size of the bookList by 1
            return 1;
        }
    }

    //storing the first data if the bookList is empty
    booklist[*size].bookID = id;
    printf("Enter book title:\n");
    fgets(blank, 100, stdin); if(p = strchr(blank, '\n')) *p = '\0';
    fgets(booklist[*size].title, 40, stdin); if(p = strchr(booklist[*size].title, '\n')) *p = '\0';
    printf("Enter author name:\n");
    fgets(booklist[*size].author, 40, stdin); if(p = strchr(booklist[*size].author, '\n')) *p = '\0';
    printf("Enter price:\n");
    scanf("%lf", &booklist[*size].price);
    printf("Enter quantity:\n");
    scanf("%d", &booklist[*size].quantity);

    //adding the size of the bookList
    (*size)++;
    return 1;
}

int findBook(Book *booklist, int size, char *target_book, char *target_author)
{
    int i;
    //if finding the target then return the index of the target in the array
    for(i = 0; i < size; i++){
        if(checker(target_book, booklist[i].title) == 1 && checker(target_author, booklist[i].author) == 1){
            return i;
        }
    }

    return -1;
}

void updateBook(Book *booklist, int size)
{
    char title[40], author[40], blank[100], *p;
    int quantity, index = -1;
    double price;

    printf("Enter the target book title:\n");
    fgets(blank, 100, stdin); if(p = strchr(blank, '\n')) *p = '\0';
    fgets(title, 40, stdin); if(p = strchr(title, '\n')) *p = '\0';
    printf("Enter the target author name:\n");
    fgets(author, 40, stdin); if(p = strchr(author, '\n')) *p = '\0';

    index = findBook(booklist, size, title, author);//using the findBook function to find the index of the book

    if(index > -1){
        printf("Enter updated book price:\n");
        scanf("%lf", &price);
        printf("Enter updated quantity:\n");
        scanf("%d", &quantity);
        booklist[index].price = price;
        booklist[index].quantity = quantity;
        printf("The target book is updated\n");
        output(booklist, index);
    }else{
        printf("The target book is not in the bookshop\n");
    }
}

int removeBook(Book *booklist, int *size)
{
    //getting the data of the target
    char title[40], author[40], blank[100], *p;
    int quantity, index = -1;
    double price;

    printf("Enter the target book title:\n");
    fgets(blank, 100, stdin); if(p = strchr(blank, '\n')) *p = '\0';
    fgets(title, 40, stdin); if(p = strchr(title, '\n')) *p = '\0';
    printf("Enter the target author name:\n");
    fgets(author, 40, stdin); if(p = strchr(author, '\n')) *p = '\0';

    //return 0 if the array of the list is empty
    if(*size == 0){
        return 0;
    }

    index = findBook(booklist, *size, title, author);//find the index of the book in the booklist

    if(index > -1)
    {
        printf("The target book is removed\n");
        //print the data of the book to be removed
        output(booklist, index);
        //the function of deleting an item in the array
        int i;
        (*size)--;
        for(i = index; i < *size; i++)
        {
            strcpy(booklist[i].title, booklist[i + 1].title);
            strcpy(booklist[i].author, booklist[i + 1].author);
            booklist[i].bookID = booklist[i + 1].bookID;
            booklist[i].price = booklist[i + 1].price;
            booklist[i].quantity = booklist[i + 1].quantity;
        }
        return 1;
    }

    return -1;//will return -1 if it cannot find the index of the target book in the booklist
}
