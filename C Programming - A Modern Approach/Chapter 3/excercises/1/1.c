#include <stdio.h> 
 
int main (void)
{
    printf("%6d, %4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);
 
return 0; 
} 
/*They should produce
"    86, 1040"
"3.0253e+001"
"83.1620"
"1e-006" -> Not entirely sure why it rounds it up
*/