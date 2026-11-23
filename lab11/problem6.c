#include <stdio.h>
const int tollrate = 50;
void processvehicle(char vehicletype[]) {
static int vehiclecount = 0;
static int totalrevenue = 0;
vehiclecount++;
totalrevenue += tollrate;
printf("processed vehicle #%d (%s) | toll charged: %d pkr | running total: %d pkr\n", vehiclecount, vehicletype, tollrate, totalrevenue);
}
int main() {
processvehicle("car");
processvehicle("truck");
processvehicle("bus");
processvehicle("motorcycle");
processvehicle("van");
return 0;
}