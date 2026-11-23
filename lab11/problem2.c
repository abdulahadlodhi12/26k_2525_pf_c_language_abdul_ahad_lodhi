#include <stdio.h>
struct product {
int id;
char name[50];
char category[50];
double price;
int stock;
};
void displayproductdetails(struct product p) {
double finalprice = p.price - (p.price * 0.05);
printf("product id: %d\n", p.id);
printf("name: %s\n", p.name);
printf("category: %s\n", p.category);
printf("original price: %.2f\n", p.price);
printf("final price after 5%% discount: %.2f\n", finalprice);
printf("available stock: %d\n\n", p.stock);
}
int main() {
struct product item1 = {101, "wireless mouse", "electronics", 2500.0, 40};
struct product item2 = {102, "mechanical keyboard", "electronics", 8500.0, 15};
displayproductdetails(item1);
displayproductdetails(item2);
return 0;
}