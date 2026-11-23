#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getcharcategory(char ch) {
if (ch >= 'A' && ch <= 'Z') {
return 1;
} else if (ch >= 'a' && ch <= 'z') {
return 2;
} else if (ch >= '0' && ch <= '9') {
return 3;
} else {
return 4;
}
}
double calculatesimilarity(char *pattern, char *attempt) {
int patlen = strlen(pattern);
int attlen = strlen(attempt);
if (patlen == 0) {
return 0.0;
}
int minlen = patlen < attlen ? patlen : attlen;
int matches = 0;
for (int i = 0; i < minlen; i++) {
if (getcharcategory(pattern[i]) == getcharcategory(attempt[i])) {
matches++;
}
}
return ((double)matches / patlen) * 100.0;
}
int main() {
int n;
printf("enter number of participants: ");
scanf("%d", &n);
getchar();
if (n <= 0) {
return 0;
}
char buffer[256];
printf("enter password pattern string: ");
fgets(buffer, sizeof(buffer), stdin);
buffer[strcspn(buffer, "\n")] = '\0';
char *pattern = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
if (pattern == NULL) {
return 1;
}
strcpy(pattern, buffer);
char **attempts = (char **)malloc(n * sizeof(char *));
double *scores = (double *)malloc(n * sizeof(double));
if (attempts == NULL || scores == NULL) {
free(pattern);
free(attempts);
free(scores);
return 1;
}
for (int i = 0; i < n; i++) {
printf("enter password attempt for participant %d: ", i + 1);
fgets(buffer, sizeof(buffer), stdin);
buffer[strcspn(buffer, "\n")] = '\0';
attempts[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
if (attempts[i] == NULL) {
for (int j = 0; j < i; j++) {
free(attempts[j]);
}
free(attempts);
free(scores);
free(pattern);
return 1;
}
strcpy(attempts[i], buffer);
scores[i] = calculatesimilarity(pattern, attempts[i]);
}
int bestidx = 0;
printf("\nresults:\n");
for (int i = 0; i < n; i++) {
printf("participant %d: %s | similarity: %.2f%%\n", i + 1, attempts[i], scores[i]);
if (scores[i] > scores[bestidx]) {
bestidx = i;
}
}
printf("highest similarity password: %s (%.2f%%)\n", attempts[bestidx], scores[bestidx]);
for (int i = 0; i < n; i++) {
free(attempts[i]);
}
free(attempts);
free(scores);
free(pattern);
return 0;
}