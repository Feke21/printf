/**
 * convert_rot13 - encode using rot13
 * @str: string to encode
 * Return: encoded string
 */

char *convert_rot13(char *str)
{
	int i = 0;
	char *s;
	int size = _strlen_recursion(str);

	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (0);

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			s[i] = str[i] + 13;
		else if ((str[i] >= 'n' && str[i] <= 'z')
				|| (str[i] >= 'N' && str[i] <= 'Z'))
			s[i] = str[i] - 13;
		else
			s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
/**
 * print_rot13 - print string with rot13
 * @ar_list: arg list
 * Return: number of printed char
 */

int print_rot13(va_list ar_list)
{
	int sum = 0;
	char *str, *argument = va_arg(ar_list, char*);

	if (!argument)
	{
		sum += _puts("%R", 0);
		return (sum);
	}

	str = convert_rot13(argument);
	if (!str)
		return (0);
	sum = _puts(str, 0);
	free(str);
	return (sum);
}
