#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
printf("enter number of book categories: ");
scanf("%d", &n);
if (n <= 0) {
return 0;
}
int *stock = (int *)malloc(n * sizeof(int));
if (stock == NULL) {
return 1;
}
for (int i = 0; i < n; i++) {
printf("enter stock for category %d: ", i);
scanf("%d", &stock[i]);
}
int total = 0;
int minidx = 0;
for (int i = 0; i < n; i++) {
total += stock[i];
if (stock[i] < stock[minidx]) {
minidx = i;
}
}
double avg = (double)total / n;
printf("total stock: %d\n", total);
printf("average stock per category: %.2f\n", avg);
printf("category index with lowest stock: %d\n", minidx);
int updateidx;
int newval;
printf("enter category index to update (-1 to skip): ");
scanf("%d", &updateidx);
if (updateidx >= 0 && updateidx < n) {
printf("enter new stock quantity: ");
scanf("%d", &newval);
stock[updateidx] = newval;
total = 0;
minidx = 0;
for (int i = 0; i < n; i++) {
total += stock[i];
if (stock[i] < stock[minidx]) {
minidx = i;
}
}
avg = (double)total / n;
printf("updated total stock: %d\n", total);
printf("updated average stock: %.2f\n", avg);
printf("updated lowest stock category index: %d\n", minidx);
}
free(stock);
return 0;
}