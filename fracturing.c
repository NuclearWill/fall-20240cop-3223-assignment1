#include <stdio.h>
#include <math.h>
#define M_PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateHeight();
double calculateWidth();
double askForUserInput();

int main(void){
    printf("Calculated Distance is: %lf\n\n", calculateDistance());
    /* this printf statement is mandetory to meet the requirements of the assignment.
    In order to get calculate distance to display its output the first time its called by itself
    and to not do it after every time its called in every other function, moving the output printf
    to outside the function was requiered.
    */
    calculatePerimeter();
    calculateArea();
    calculateHeight();
    calculateWidth();
    return 0;
}

double calculateDistance(){ //it would be better to call this function calculateDiameter as that is how its used for all the other functions
    //variables for the X and Y coordinates that make up the two opposite ends of the diameter for the circle
    double x1;
    double y1;
    double x2;
    double y2;

    /*the below block asks the input from the user to calculate the distance between the two points. As much as I would prefer to ask a single time
    and use the same points for all the functions, there is no way to do that without using parameters or global variables, both of which are disallowed*/
    printf("Enter the first point's X value: ");
    x1 = askForUserInput();
    printf("First point's X value set to: %lf\n\n", x1);
    printf("Enter the first point's Y value: ");
    y1 = askForUserInput();
    printf("First point's Y value set to: %lf\n\n", y1);

    printf("Enter the second point's X value: ");
    x2 = askForUserInput();
    printf("Second point's X value set to: %lf\n\n", x2);
    printf("Enter the second point's Y value: ");
    y2 = askForUserInput();
    printf("Second point's Y value set to: %lf\n\n", y2);

    double distance = sqrt(pow((x2 - x1),2.0) + pow((y2 - y1),2.0)); //this is just the formula for calculating the distance between two points
    //An output message would go here however adding one would make each use of this function post an additional output message about the diameter which is against the rules
    return distance;
}

double calculatePerimeter(){
    double perimeter = calculateDistance() * M_PI; //the perimeter for a circle is just the diameter multiplied by PI
    printf("Calculated Perimeter is: %lf\n\n", perimeter);
    return perimeter;
}

double calculateArea(){
    double area = pow((calculateDistance()/2.0),2.0) * M_PI; /*the area for a circle is the radius of a circle to the second power, multiplied by PI.
    Since I only have a function for the diameter, I just halved the diameter to get the radius*/
    printf("Calculated Area is: %lf\n\n", area);
    return area;
}
double calculateHeight(){
    double height = calculateDistance(); //the height of a circle is also the diameter of a circle, so I just plugged in calculateDistance
    printf("Calculated Height is: %lf\n\n", height);
    return height;
}
double calculateWidth(){
    double width = calculateDistance(); //the width of a circle is ALSO the diameter of a circle too, so I just plugged in calculateDistance again
    printf("Calculated Width is: %lf\n\n", width);
    return width;
}
double askForUserInput(){ //this is the function for the bonus. I don't see the point as it can really only have one scanf function without outputing anything
    double input;
    scanf("%lf", &input);
    return input;
}