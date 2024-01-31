// 2.	Write C program to define a macro with one parameter to compute the volume of a sphere.
// Write a C program using this macro to compute the volume for spheres of radius 5, 10 and 15 meters

#include <stdio.h>

#define SPHERE_VOLUME(r) (4.0 / 3.0 * 3.14159265358979323846 * (r) * (r) * (r))

int main()
{
    // Calculate volume for spheres of radius 5, 10, and 15 meters
    int radius_values[] = {5, 10, 15};
    int num_spheres = sizeof(radius_values) / sizeof(radius_values[0]);

    printf("Volumes of spheres:\n");
    for (int i = 0; i < num_spheres; ++i)
    {
        int radius = radius_values[i];
        double volume = SPHERE_VOLUME(radius);
        printf("Radius = %d meters, Volume = %.2f cubic meters\n", radius, volume);
    }

    return 0;
}
