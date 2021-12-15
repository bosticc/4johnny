 #include <stdio.h> #include <stdlib.h> #include <stdbool.h> #include <string.h>
struct node {
char username[30]; int socket;
struct ugnode *head; struct node *dmhead; struct node *next;
};
struct ugnode {
char groupname[30]; struct ugnode *next;
};
struct gnode {
char groupname[30]; struct node *head; struct gnode *next;
};
/////////////////// USERLIST ////////////////////////// //display the list
void printListU(struct node *head);
void display_users(struct node *l, char *buf, int s);
//insert link at the first location
struct node* insertFirstU(struct node *head, int socket, char *username);
//delete first item
struct node* deleteFirstU(struct node *head);
//is list empty
bool isEmptyU(struct node *head);
int lengthU(struct node *head);
//find a link with given socket
struct node* findSocketU(struct node *head, int socket);
//find a link with given socket

 struct node* findU(struct node *head, char* username);
//delete a link with given socket
struct node* deleteSocketU(struct node *head, int socket); //delete a link with given username
struct node* deleteU(struct node *head, char* username);
void destroyU(struct node *head); ////////////////////////////////////////////////////////
/////////////////// USER GROUPLIST ////////////////////////// //display the list
void printListUG(struct ugnode *head);
void display_groups(struct gnode *l, char *buf);
//insert link at the first location
struct ugnode* insertFirstUG(struct ugnode *head, char *groupname);
//delete first item
struct ugnode* deleteFirstUG(struct ugnode *head);
//is list empty
bool isEmptyUG(struct ugnode *head);
int lengthUG(struct ugnode *head);
//find a link with given socket
struct ugnode* findUG(struct ugnode *head, char* groupname);
//delete a link with given groupname
struct ugnode* deleteUG(struct ugnode *head, char* groupname);
void destroyUG(struct ugnode *head); ////////////////////////////////////////////////////////
/////////////////// GROUPLIST ////////////////////////// //display the list
void printListG(struct gnode *head);
//insert link at the first location
struct gnode* insertFirstG(struct gnode *head, char *groupname);

 //delete first item
struct gnode* deleteFirstG(struct gnode *head);
//is list empty
bool isEmptyG(struct gnode *head);
int lengthG(struct gnode *head);
//find a link with given socket
struct gnode* findG(struct gnode *head, char* groupname);
//delete a link with given groupname
struct gnode* deleteG(struct gnode *head, char* groupname);
void destroyG(struct gnode *head); ////////////////////////////////////////////////////////
