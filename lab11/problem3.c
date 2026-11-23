#include <stdio.h>
struct item {
int id;
char name[50];
int quantity;
double unitprice;
};
int main() {
struct item inventory[5];
double totalvalue = 0.0;
for (int i = 0; i < 5; i++) {
printf("enter id for item %d: ", i + 1);
scanf("%d", &inventory[i].id);
getchar();
printf("enter name for item %d: ", i + 1);
fgets(inventory[i].name, sizeof(inventory[i].name), stdin);
for (int j = 0; inventory[i].name[j] != '\0'; j++) {
if (inventory[i].name[j] == '\n') {
inventory[i].name[j] = '\0';
break;
}
}
printf("enter quantity for item %d: ", i + 1);
scanf("%d", &inventory[i].quantity);
printf("enter unit price for item %d: ", i + 1);
scanf("%lf", &inventory[i].unitprice);
totalvalue += inventory[i].quantity * inventory[i].unitprice;
}
printf("\ntotal warehouse inventory value: %.2f\n", totalvalue);
int searchid;
int found = 0;
printf("enter item id to search: ");
scanf("%d", &searchid);
for (int i = 0; i < 5; i++) {
if (inventory[i].id == searchid) {
printf("item found -> id: %d | name: %s | quantity: %d | unit price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].unitprice);
found = 1;
break;
}
}
if (!found) {
printf("item with id %d not found.\n", searchid);
}
return 0;
}