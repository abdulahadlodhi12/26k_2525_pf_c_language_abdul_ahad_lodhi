#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
int n;
printf("enter number of feedback entries: ");
scanf("%d", &n);
getchar();
if (n <= 0) {
return 0;
}
char **feedbacks = NULL;
char buffer[1024];
for (int i = 0; i < n; i++) {
char **temp = (char **)realloc(feedbacks, (i + 1) * sizeof(char *));
if (temp == NULL) {
for (int j = 0; j < i; j++) {
free(feedbacks[j]);
}
free(feedbacks);
return 1;
}
feedbacks = temp;
printf("enter feedback %d: ", i + 1);
fgets(buffer, sizeof(buffer), stdin);
buffer[strcspn(buffer, "\n")] = '\0';
feedbacks[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
if (feedbacks[i] == NULL) {
for (int j = 0; j <= i; j++) {
free(feedbacks[j]);
}
free(feedbacks);
return 1;
}
strcpy(feedbacks[i], buffer);
}
int totalchars = 0;
char *longest = feedbacks[0];
int maxlen = 0;
char *p = longest;
while (*p != '\0') {
maxlen++;
p++;
}
for (int i = 0; i < n; i++) {
int len = 0;
char *ptr = feedbacks[i];
while (*ptr != '\0') {
len++;
ptr++;
}
totalchars += len;
if (len > maxlen) {
maxlen = len;
longest = feedbacks[i];
}
}
printf("\nall feedback entries:\n");
for (int i = 0; i < n; i++) {
printf("%d: %s\n", i + 1, feedbacks[i]);
}
printf("total characters across all entries: %d\n", totalchars);
printf("longest feedback entry: %s\n", longest);
for (int i = 0; i < n; i++) {
free(feedbacks[i]);
}
free(feedbacks);
return 0;
}