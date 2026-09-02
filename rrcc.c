#include <stdio.h>
#include <string.h>
int main()
{
    char city[5][10] = { "DELHI", "CHENNAI", "BANGALORE", "HYDERABAD",
"MUMBAI" };
    int i;
    printf("\n The cities are:\n");
    for(i=0; i<5; i++)
    {
        printf("%s\n", city[i]);
    }
    return 0;
}