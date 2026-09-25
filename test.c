#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    test_f(unsigned int i, char c)
{
        return (c + i);
}

int main(void)
{
	/*
    printf("Start ft_isalpha\n");
    printf("%d\n", ft_isalpha('a'));
    printf("%d\n", ft_isalpha('1'));
    printf("Start ft_isdigit\n");
    printf("%d\n", ft_isdigit('D'));
    printf("%d\n", ft_isdigit('1'));
    printf("Start ft_isascii\n");
   printf("%d\n", ft_isascii(0));
printf("%d\n", ft_isascii(65));
printf("%d\n", ft_isascii(127));
printf("%d\n", ft_isascii(128));
printf("%d\n", ft_isascii(-1));
printf("%d\n", ft_isascii(200));
   printf("Start ft_isalnum\n");
printf("%d\n", ft_isalnum('A'));
printf("%d\n", ft_isalnum('z'));
printf("%d\n", ft_isalnum('5'));
printf("%d\n", ft_isalnum('0'));
printf("%d\n", ft_isalnum('@'));
printf("%d\n", ft_isalnum(' '));
printf("%d\n", ft_isalnum('!'));
printf("%d\n", ft_isalnum(128));
printf("Start ft_strlen\n");
char dst[20] = "Hello ";
printf("%zu\n", ft_strlen(dst));
printf("Start ft_isprint\n");
printf("%d\n", ft_isprint('A'));
printf("%d\n", ft_isprint('z'));
printf("%d\n", ft_isprint('0'));
printf("%d\n", ft_isprint(' '));
printf("%d\n", ft_isprint('!'));
printf("%d\n", ft_isprint('~'));

printf("%d\n", ft_isprint(31));
printf("%d\n", ft_isprint(32));
printf("%d\n", ft_isprint(126));
printf("%d\n", ft_isprint(127));
printf("Start ft_strchr\n");
printf("%s\n", ft_strchr("hello world", 'o'));
printf("%s\n", ft_strchr("hello world", 'l'));
printf("%p\n", (void *)ft_strchr("hello world", 'x'));
printf("%s\n", ft_strchr("hello", 'h'));
printf("%s\n", ft_strchr("hello", 'o'));
printf("%p\n", (void *)ft_strchr("hello", '\0'));
printf("Start ft_strrchr\n");
printf("%s\n", ft_strrchr("hello", 'e'));
printf("%s\n", ft_strrchr("hello", 'l'));
printf("%s\n", ft_strrchr("banana", 'a'));
printf("%s\n", ft_strrchr("abcda", 'a'));
printf("%p\n", (void *)ft_strrchr("hello world", 'x'));
printf("%p\n", (void *)ft_strrchr("hello", '\0'));
printf("Start ft_strlcat\n");
char	dst1[20] = "Hello ";

printf("Return: %zu\n", ft_strlcat(dst1, "World", 20));
printf("dst: %s\n", dst1);
char	dst2[10] = "Hello ";

printf("Return: %zu\n", ft_strlcat(dst2, "World", 10));
printf("dst: %s\n", dst2);
char	dst3[20] = "Hello";

printf("Return: %zu\n", ft_strlcat(dst3, "World", 3));
printf("dst: %s\n", dst3);
char	dst4[20] = "Hello";

printf("Return: %zu\n", ft_strlcat(dst4, "World", 0));
printf("dst: %s\n", dst4);
char	dst5[20] = "";

printf("Return: %zu\n", ft_strlcat(dst5, "Hello", 20));
printf("dst: %s\n", dst5);
printf("Start ft_strncmp\n");
printf("%d\n", ft_strncmp("hello", "hello", 5));
printf("%d\n", ft_strncmp("hello", "hello", 3));
printf("%d\n", ft_strncmp("hello", "heLlo", 5));
printf("%d\n", ft_strncmp("abc", "abd", 3));
printf("%d\n", ft_strncmp("abd", "abc", 3));
printf("%d\n", ft_strncmp("abc", "xyz", 0));
printf("%d\n", ft_strncmp("abc", "abz", 2));
printf("%d\n", ft_strncmp("abc", "abcdef", 6));
printf("%d\n", strncmp("abc", "abc", 10));
printf("%d\n", ft_strncmp("abc", "abc", 10));
	printf("Start ft_strnstr\n");
printf("%s\n", ft_strnstr("abcdef", "", 3));
printf("%s\n", ft_strnstr("Hello World", "World", 11));
printf("%s\n", ft_strnstr("abcdef", "cd", 6));
printf("%s\n", ft_strnstr("aaaaabc", "abc", 7));
printf("%p\n", (void *)ft_strnstr("abcXYZ", "XYZ", 3));
printf("%p\n", (void *)ft_strnstr("Hello World", "World", 7));
	printf("Start ft_toupper\n");
printf("%c\n", ft_toupper('a'));
printf("%c\n", ft_toupper('z'));
printf("%c\n", ft_toupper('m'));
printf("%c\n", ft_toupper('A'));
printf("%c\n", ft_toupper('Z'));
printf("%c\n", ft_toupper('5'));
printf("%c\n", ft_toupper('@'));
printf("%c\n", ft_toupper(' '));
printf("Start ft_tolower\n");
printf("%c\n", ft_tolower('A'));
printf("%c\n", ft_tolower('Z'));
printf("%c\n", ft_tolower('M'));
printf("%c\n", ft_tolower('a'));
printf("%c\n", ft_tolower('z'));
printf("%c\n", ft_tolower('5'));
printf("%c\n", ft_tolower('@'));
printf("%c\n", ft_tolower(' '));
printf("%c\n", ft_toupper(ft_tolower('G')));
printf("%c\n", ft_tolower(ft_toupper('q')));
	printf("Start ft_strlcpy");
char dst1[20] = "XXXXXXXXXX";

printf("ret = %zu\n", ft_strlcpy(dst1, "Hello", 20));
printf("dst = [%s]\n", dst1);
char dst2[6] = "XXXXXX";

printf("ret = %zu\n", ft_strlcpy(dst2, "Hello", 6));
printf("dst = [%s]\n", dst2);
char dst3[10] = "XXXXXXXXX";

printf("ret = %zu\n", ft_strlcpy(dst3, "Hello", 4));
printf("dst = [%s]\n", dst3);
char dst4[10] = "XXXXXXXXX";

printf("ret = %zu\n", ft_strlcpy(dst4, "Hello", 1));
printf("dst = [%s]\n", dst4);
char dst5[10] = "XXXXXXXXX";

printf("ret = %zu\n", ft_strlcpy(dst5, "Hello", 0));
printf("dst = [%s]\n", dst5);
char dst6[10] = "XXXXXXXXX";

printf("ret = %zu\n", ft_strlcpy(dst6, "", 10));
printf("dst = [%s]\n", dst6);
char dst7[20] = "XXXXXXXXX";

printf("ret = %zu\n", ft_strlcpy(dst7, "Hello World!", 6));
printf("dst = [%s]\n", dst7);
	printf("Start ft_memset\n");
    char str1[] = "Hello World";

    ft_memset(str1, 'X', 5);

    printf("%s\n", str1);
        char str2[10] = "abcdefghi";

    ft_memset(str2, 'Z', 3);

    printf("%s\n", str2);
        int arr3[5] = {1, 2, 3, 4, 5};

    ft_memset(arr3, 0, 5);

    printf("%d\n", arr3[0]);
    printf("%d\n", arr3[1]);
    printf("%d\n", arr3[2]);
    printf("%d\n", arr3[3]);
    printf("%d\n", arr3[4]);
	    printf("Start ft_bzero\n");
        char str1[] = "Hello";

    ft_bzero(str1, 3);

    printf("%d\n", str1[0]);
    printf("%d\n", str1[1]);
    printf("%d\n", str1[2]);
    printf("%c\n", str1[3]);
    printf("%c\n", str1[4]);
        char str2[] = "Hello";

    ft_bzero(str2, 1);

    printf("%d\n", str2[0]);
    printf("%c\n", str2[1]);
    printf("%c\n", str2[2]);
    printf("%c\n", str2[3]);
    printf("%c\n", str2[4]);
        char str3[] = "Hello";

    ft_bzero(str3, 6);

    printf("%d\n", str3[0]);
    printf("%d\n", str3[1]);
    printf("%d\n", str3[2]);
    printf("%d\n", str3[3]);
    printf("%d\n", str3[4]);
    printf("%d\n", str3[5]);
        char str4[] = "Hello";

    ft_bzero(str4, 0);

    printf("%s\n", str4);
        int arr5[3] = {123, 456, 789};

    ft_bzero(arr5, sizeof(arr5));

    printf("%d\n", arr5[0]);
    printf("%d\n", arr5[1]);
    printf("%d\n", arr5[2]);
	     printf("Start ft_memcpy\n");
        char src1[] = "Hello";
    char dest1[10] = "xxxxx";

    ft_memcpy(dest1, src1, 5);

    printf("%s\n", dest1);
        char src2[] = "Hello";
    char dest2[10] = "abcdefghi";

    ft_memcpy(dest2, src2, 3);

    printf("%s\n", dest2);
        char src3[] = "Hello";
    char dest3[10] = "abcdefghi";

    ft_memcpy(dest3, src3, 6);

    printf("%s\n", dest3);
        char src4[] = "Hello";
    char dest4[10] = "abcdefghi";

    ft_memcpy(dest4, src4, 0);

    printf("%s\n", dest4);
      int src5[] = {10, 20, 30};
    int dest5[] = {1, 2, 3};

    ft_memcpy(dest5, src5, sizeof(src5));

    printf("%d\n", dest5[0]);
    printf("%d\n", dest5[1]);
    printf("%d\n", dest5[2]);
	     printf("Start ft_memchr\n");
        char str1[] = "Hello";

    printf("%s\n", (char *)ft_memchr(str1, 'l', 5));
    char str2[] = "Hello";

    printf("%p\n",  (void *)ft_memchr(str2, 'l', 2));
    char str3[] = "Hello";

    printf("%p\n",  (void *)ft_memchr(str3, 'x', 5));
        char str4[] = "Hello";

    char *result1 = ft_memchr(str4, 'l', 5);

    printf("%c\n", *result1);
        char str5[] = "Hello";

    char *result2 = ft_memchr(str5, '\0', 6);

    if (result2)
        printf("Found: %d\n", *result2);
    else
        printf("Not found\n");
        char str6[] = {'A', 'B', '\0', 'C', 'D'};

    char *result3 = ft_memchr(str6, 'C', 5);

    if (result3)
        printf("%c\n", *result3);
    else
        printf("Not found\n");
		printf("Start ft_memcmp\n");
    char s1[] = "Hello";
char s2[] = "Hello";

printf("%d\n", ft_memcmp(s1, s2, 5));
char s3[] = "Hello";
char s4[] = "Jello";

printf("%d\n", ft_memcmp(s3, s4, 5));
char s5[] = "Jello";
char s6[] = "Hello";

printf("%d\n", ft_memcmp(s5, s6, 5));
char s7[] = {'A', 'B', '\0', 'C'};
char s8[] = {'A', 'B', '\0', 'D'};

printf("%d\n", ft_memcmp(s7, s8, 4));
char s9[] = "Hello";
char s10[] = "Jello";

printf("%d\n", ft_memcmp(s9, s10, 2));
char s11[] = "abcX";
char s12[] = "abcY";

printf("%d\n", ft_memcmp(s11, s12, 3));
char s13[] = "Hello";
char s14[] = "World";

printf("%d\n", ft_memcmp(s13, s14, 0));
	char str[] = "123456";

ft_memcpy(str, str + 2, 4);
printf("%s\n", str);
memcpy(str,str + 2, 4);
printf("%s\n", str);
	 printf("Start ft_memcpy\n");
        char src1[] = "Hello";
    char dest1[10] = "xxxxx";

    memcpy(dest1, src1, 5);

    printf("%s\n", dest1);
        char src2[] = "Hello";
    char dest2[10] = "abcdefghi";

    memcpy(dest2, src2, 3);

    printf("%s\n", dest2);
        char src3[] = "Hello";
    char dest3[10] = "abcdefghi";

    memcpy(dest3, src3, 6);

    printf("%s\n", dest3);
        char src4[] = "Hello";
    char dest4[10] = "abcdefghi";

    memcpy(dest4, src4, 0);

    printf("%s\n", dest4);
      int src5[] = {10, 20, 30};
    int dest5[] = {1, 2, 3};

    memcpy(dest5, src5, sizeof(src5));

    printf("%d\n", dest5[0]);
    printf("%d\n", dest5[1]);
    printf("%d\n", dest5[2]);
//	            char str[] = "123456";

//ft_memcpy(str, str + 2, 4);
//printf("%s\n", str);
//memcpy(str,str + 2, 4);
//printf("%s\n", str);
char str[] = "123456";

ft_memmove(str, str + 2, 4);
printf("%s\n", str);
char str1[] = "123456";

ft_memmove(str1 + 2, str1, 4);
printf("%s\n", str1);
	ft_atoi("42");
ft_atoi("42");
ft_atoi("-42");
ft_atoi("+42");

ft_atoi("---42");
ft_atoi("-+42");
ft_atoi("42abc");
ft_atoi("   -42");
ft_atoi("   42");
ft_atoi("42 123");
ft_atoi("42    ");
printf("1: %d\n", ft_atoi("42"));
	printf("2: %d\n", ft_atoi("-42"));
	printf("3: %d\n", ft_atoi("+42"));

	printf("4: %d\n", ft_atoi("   42"));
	printf("5: %d\n", ft_atoi("   -42"));
	printf("6: %d\n", ft_atoi("\t\n  42"));

	printf("7: %d\n", ft_atoi("42abc"));
	printf("8: %d\n", ft_atoi("abc42"));
	printf("9: %d\n", ft_atoi("42 123"));

	printf("10: %d\n", ft_atoi("+-42"));
	printf("11: %d\n", ft_atoi("-+42"));
	printf("12: %d\n", ft_atoi("--42"));

	printf("13: %d\n", ft_atoi(""));
	printf("14: %d\n", ft_atoi("abc"));
	printf("15: %d\n", ft_atoi("+"));
	printf("16: %d\n", ft_atoi("-"));
		printf("%d\n", ft_atoi("  +42"));
printf("%d\n", ft_atoi("  -42"));

printf("%d\n", ft_atoi("+"));
printf("%d\n", ft_atoi("-"));

printf("%d\n", ft_atoi("++42"));
printf("%d\n", ft_atoi("--42"));
printf("%d\n", ft_atoi("+-42"));
printf("%d\n", ft_atoi("-+42"));

printf("%d\n", ft_atoi("123+456"));
printf("%d\n", ft_atoi("-123+456"));

printf("%d\n", ft_atoi("000123"));
printf("%d\n", ft_atoi("-000123"));

printf("%d\n", ft_atoi("abc"));
printf("%d\n", ft_atoi("abc123"));
printf("%d\n", ft_atoi("123abc456"));
printf("%d\n", ft_atoi("2147483647"));
printf("%d\n", ft_atoi("-2147483648"));
printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
printf("%d\n", atoi("  +42"));
printf("%d\n", atoi("  -42"));

printf("%d\n", atoi("+"));
printf("%d\n", atoi("-"));

printf("%d\n", atoi("++42"));
printf("%d\n", atoi("--42"));
printf("%d\n", atoi("+-42"));
printf("%d\n", atoi("-+42"));

printf("%d\n", atoi("123+456"));
printf("%d\n", atoi("-123+456"));

printf("%d\n", atoi("000123"));
printf("%d\n", atoi("-000123"));

printf("%d\n", atoi("abc"));
printf("%d\n", atoi("abc123"));
printf("%d\n", atoi("123abc456"));
printf("%d\n", atoi("2147483647"));
printf("%d\n", atoi("-2147483648"));
*/

//ft_calloc(4,5);
/*
    char    *a;
    char    *b;

    a = ft_strdup("Hello");
    b = ft_strdup("Hello");

    printf("a: %s\n", a);
    printf("b: %s\n", b);

    printf("a address: %p\n", (void *)a);
    printf("b address: %p\n", (void *)b);

    if (a == b)
        printf("❌ WRONG: same address\n");
    else
        printf("✅ GOOD: different addresses\n");

    free(a);
    free(b);
	char	*s;
	char	*sub;

	s = "Hello World";
	sub = ft_substr(s, 6, 5);

	printf("Original : %s\n", s);
	printf("Substring: %s\n", sub);

	printf("Original address : %p\n", (void *)s);
	printf("Substring address: %p\n", (void *)sub);

	if (sub != s)
		printf("NEW STRING: YES\n");
	else
		printf("NEW STRING: NO\n");

	free(sub);
	return (0);
	printf("%s\n", ft_strjoin("Hello", "World"));
printf("%s\n", ft_strjoin("Hello", " World"));

printf("%s\n", ft_strjoin("", "World"));
printf("%s\n", ft_strjoin("Hello", ""));
printf("%s\n", ft_strjoin("", ""));
printf("%s\n", ft_strjoin("Hello Asem ", "How are you?"));*/
//	ft_strtrim("  Hello World  ", " ");
/*
printf("############\n");
ft_strtrim("Hello World", "x");
printf("############\n");
	ft_strtrim("   Hello", " ");
	printf("############\n");
	ft_strtrim("Hello   ", " ");
	printf("############\n");
	ft_strtrim("A", "x");
		printf("############\n");
	ft_strtrim("A", "A");
	printf("############\n");
	ft_strtrim("...!!!Hello World!!!...", ".!");
	printf("############\n");
	ft_strtrim("xxxHello xxxWorldxxx", "x");
	printf("############\n");
	ft_strtrim("Hello World", "");
	printf("############\n");
	ft_strtrim("", "x");
	printf("############\n");
	ft_strtrim("     ", " ");
	printf("############\n");
	ft_strtrim("!!!   Hello World   ...", "! .");
	printf("############\n");
	ft_strtrim("xxxxx", "x");
	printf("############\n");
	printf("[%s]\n", ft_strtrim("", " "));
printf("[%s]\n", ft_strtrim("     ", " "));
printf("[%s]\n", ft_strtrim("A", "x"));
printf("[%s]\n", ft_strtrim("A", "A"));*/
	//ft_itoa(124323);
	//printf("-124323\n");
//ft_itoa(-124323);
//ft_itoa(-2147483648);
//ft_itoa(0);
	//char	*result;

//	result = ft_strmapi("abc", test_f);
//	printf("%s\n", result);
//	free(result);
	//ft_split("hello,world,test", ',');
//ft_split("hello,world,test", ' ');
//ft_split("", ' ');
//ft_split("hello   world", ' ');
//ft_split("hello world", ' ');
//ft_split("       hello      world      ", ' ');
char **res = ft_split("   Hello   World  42   ", ' ');
int i = 0;

while (res[i])
{
    printf("[%s]\n", res[i]);
    i++;
}
    return (0);
}
