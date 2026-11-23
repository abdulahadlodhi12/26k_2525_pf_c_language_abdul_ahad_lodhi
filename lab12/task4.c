#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
printf("enter number of movie categories: ");
scanf("%d", &n);
if (n <= 0) {
return 0;
}
int *ratings = (int *)malloc(n * sizeof(int));
if (ratings == NULL) {
return 1;
}
for (int i = 0; i < n; i++) {
printf("enter rating count for category %d: ", i);
scanf("%d", &ratings[i]);
}
int total = 0;
int maxidx = 0;
for (int i = 0; i < n; i++) {
total += ratings[i];
if (ratings[i] > ratings[maxidx]) {
maxidx = i;
}
}
double avg = (double)total / n;
printf("total ratings across all categories: %d\n", total);
printf("average ratings per category: %.2f\n", avg);
printf("category index with highest rating count: %d\n", maxidx);
int updateidx;
int newrating;
printf("enter category index to update (-1 to skip): ");
scanf("%d", &updateidx);
if (updateidx >= 0 && updateidx < n) {
printf("enter new rating count: ");
scanf("%d", &newrating);
ratings[updateidx] = newrating;
total = 0;
maxidx = 0;
for (int i = 0; i < n; i++) {
total += ratings[i];
if (ratings[i] > ratings[maxidx]) {
maxidx = i;
}
}
avg = (double)total / n;
printf("updated total ratings: %d\n", total);
printf("updated average ratings: %.2f\n", avg);
printf("updated highest rating category index: %d\n", maxidx);
}
free(ratings);
return 0;
}