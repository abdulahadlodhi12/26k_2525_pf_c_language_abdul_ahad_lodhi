#include <stdio.h>
int calculatechecksum(int transactionid) {
if (transactionid < 10) {
return transactionid;
}
int sum = 0;
while (transactionid > 0) {
sum += transactionid % 10;
transactionid /= 10;
}
return calculatechecksum(sum);
}
int main() {
int tid;
printf("enter transaction id: ");
scanf("%d", &tid);
int checksum = calculatechecksum(tid);
printf("digital root checksum: %d\n", checksum);
return 0;
}