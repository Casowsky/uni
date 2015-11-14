#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[256];
	float radius;
	int nMoons;
}Planet;

int main(void) {
	int i, numPlanets=5;
	Planet* solarSystem = (Planet*)malloc(numPlanets * sizeof(Planet));

	for(i=0;i<numPlanets;i++) {
		printf("Enter planet %d name: ", i+1);
		scanf("%s", &solarSystem[i].name);
	
		printf("Enter planet %d radius (km): ", i+1);
		scanf("%f", &solarSystem[i].radius);

		printf("Enter the number of moons this planet has: ");
		scanf("%d", &solarSystem[i].nMoons);

		printf("\n");
	}

	printf("Solar system bodies:\n");
	for(i=0;i<numPlanets;i++) {
		printf("\t%s\t%0.2f\t\t%d\n", solarSystem[i].name, solarSystem[i].radius, solarSystem[i].nMoons);
	}

	free(solarSystem);
	
	return 0;
}
