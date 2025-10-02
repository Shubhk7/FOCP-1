// Q43. A quality check tool identifies the smallest defect dimension out of three measurements. Implement a 
// solution to display the smallest of three numbers. 
#include <stdio.h>

int main()
{
    int dim1, dim2, dim3;
    printf("Enter three defect dimensions: ");
    scanf("%d %d %d", &dim1, &dim2, &dim3);
    if (dim1 <= dim2 && dim1 <= dim3)
    {
        printf("The smallest defect dimension is: %d\n", dim1);
    }
    else if (dim2 <= dim1 && dim2 <= dim3)
    {
        printf("The smallest defect dimension is: %d\n", dim2);
    }
    else
    {
        printf("The smallest defect dimension is: %d\n", dim3);
    }
    return 0;
}