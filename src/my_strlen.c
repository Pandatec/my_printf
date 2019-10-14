/*
** EPITECH PROJECT, 2018
** task03
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int counts = 0;

    while (str[counts] != '\0') {
        counts = counts + 1;
    }
    return (counts);
}