#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int containsdigit(char *str) {
while (*str != '\0') {
if (*str >= '0' && *str <= '9') {
return 1;
}
str++;
}
return 0;
}
int main() {
int n;
printf("enter number of usernames: ");
scanf("%d", &n);
getchar();
if (n <= 0) {
return 0;
}
char **usernames = (char **)malloc(n * sizeof(char *));
if (usernames == NULL) {
return 1;
}
char buffer[256];
for (int i = 0; i < n; i++) {
printf("enter username %d: ", i + 1);
fgets(buffer, sizeof(buffer), stdin);
buffer[strcspn(buffer, "\n")] = '\0';
usernames[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
if (usernames[i] == NULL) {
for (int j = 0; j < i; j++) {
free(usernames[j]);
}
free(usernames);
return 1;
}
strcpy(usernames[i], buffer);
}
int validcount = 0;
for (int i = 0; i < n; i++) {
if (containsdigit(usernames[i])) {
free(usernames[i]);
usernames[i] = NULL;
} else {
usernames[validcount++] = usernames[i];
}
}
printf("\nvalid alphabetic usernames:\n");
for (int i = 0; i < validcount; i++) {
printf("%s\n", usernames[i]);
free(usernames[i]);
}
free(usernames);
return 0;
}