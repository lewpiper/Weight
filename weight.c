/* Weight | Lew Piper III | 011263249 */

#include<stdio.h>

//Define file variable to point to
FILE *fp;

int main(void) {
	//Declaration of variables
	int earth_weight = 200;
	double mercury_percent_EW = 37.8;
	double venus_percent_EW = 90.7;
	double mars_percent_EW = 37.7;
	double jupiter_percent_EW = 236.0;
	double saturn_percent_EW = 91.6;
	double uranus_percent_EW = 88.9;
	double neptune_percent_EW = 112.0;
	
	double const convert_percent = .01;
	
	double mercury_percent_earth_weight = mercury_percent_EW * convert_percent;
	double venus_percent_earth_weight = venus_percent_EW * convert_percent;
	double mars_percent_earth_weight = mars_percent_EW * convert_percent; 
	double jupiter_percent_earth_weight = jupiter_percent_EW * convert_percent;
	double saturn_percent_earth_weight = saturn_percent_EW * convert_percent; 
	double uranus_percent_earth_weight = uranus_percent_EW * convert_percent; 
	double neptune_percent_earth_weight = neptune_percent_EW * convert_percent;

		//Open file to print to
		fp = fopen("csis.txt", "w");
		
		
		//Calculations
		double weight_on_mercury = earth_weight * mercury_percent_earth_weight;
		double weight_on_venus = earth_weight * venus_percent_earth_weight;
		double weight_on_mars = earth_weight * mars_percent_earth_weight;
		double weight_on_jupiter = earth_weight * jupiter_percent_earth_weight;
		double weight_on_saturn = earth_weight * saturn_percent_earth_weight;
		double weight_on_uranus = earth_weight * uranus_percent_earth_weight;
		double weight_on_neptune = earth_weight * neptune_percent_earth_weight;
		
		//Presentation of the results 
		printf("Mercury:  %.1lf\n", weight_on_mercury);
		printf("  Venus: %.1lf\n", weight_on_venus);
		printf("   Mars:  %.1lf\n", weight_on_mars);
		printf("Jupiter: %.1lf\n", weight_on_jupiter);
		printf(" Saturn: %.1lf\n", weight_on_saturn);
		printf(" Uranus: %.1lf\n", weight_on_uranus);
		printf("Neptune: %.1lf\n", weight_on_neptune);
		
		
		fprintf(fp,"Mercury:  %.1lf\n", weight_on_mercury);
		fprintf(fp,"  Venus: %.1lf\n", weight_on_venus);
		fprintf(fp,"   Mars:  %.1lf\n", weight_on_mars);
		fprintf(fp,"Jupiter: %.1lf\n", weight_on_jupiter);
		fprintf(fp," Saturn: %.1lf\n", weight_on_saturn);
		fprintf(fp," Uranus: %.1lf\n", weight_on_uranus);
		fprintf(fp,"Neptune: %.1lf\n", weight_on_neptune);
		

		//Close the file and exit the program
		fclose(fp);
		return 0;
}