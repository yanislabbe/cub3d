#include "../include/cub3d.h"

int check_name_map_argument(char **argv)
{
    if (map_ends_with_cub(argv[1]) == 1)
    {
        return (1);
    }
    else if (name_map_isspace(argv[1]) == 1)
    {
        return (1);
    }
    return (0);
}

int check_first_step(int argc, char **argv)
{
    if (check_number_of_arguments(argc) == 1)
    {
        return (1);
    }
    if (check_name_map_argument(argv) == 1)
    {
        return (1);
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (check_first_step(argc, argv) == 0)
    {
        printf("\n\nÇa passe le first step check!!\n\n");
    }
    return (0);
}