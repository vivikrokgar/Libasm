#include "libasm.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	// FT_STRLEN
	printf("\n-----Testing ft_strlen-----\n\n");

	char *str = "Hello World!";

	printf("Our string : %s\nWith strlen		: %zu\n", str, strlen(str));
	printf("With our ft_strlen	: %zu\n", ft_strlen(str));


	// FT_STRCPY
	printf("\n-----Testing ft_strcpy-----\n\n");

	char src[] = "IWishToBecomeACopy";
	char dest1[20] = {0};
	char dest2[20] = {0};

	char *result = ft_strcpy(dest1, src);
	char *original = strcpy(dest2, src);

	printf("Our ft_strcpy	: %s\n", dest1);
	printf("with strcpy	: %s\n", dest2);

	printf("Same content	: %d\n", strcmp(dest1, dest2) == 0);
	printf("Same adresse	: %d\n", result == dest1);
	printf("Is it still og	: %d\n", original == dest2);

	// FT_STRCMP
	printf("\n-----Testing ft_strcmp-----\n\n");

	return (0);
}