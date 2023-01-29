/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:57:45 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/29 11:32:14 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    char *dst;
    char check[2];
    int fd = open("test.log",  O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
    int fd_check = open("check.log",  O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
    dst = NULL;
    if(ac < 2)
    {
        printf("%syou need to add argument for number do you want to test %s", BLUE, DEFFAULT);
        return 1;
    }
    system("make re");
    printf("waiting ...\n%s", DEFFAULT);
    sleep(3);
    if(atoi(av[1]) == 5)
    {
        system("./push_swap 1 3 4 5 2 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 1 3 4 5 2 | ./checker_Mac 1 3 4 5 2 > check.log");
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 2 3 5 1 4 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 2 3 5 1 4 | ./checker_Mac 2 3 5 1 4 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 2 5 3 1 4 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 2 5 3 1 4 | ./checker_Mac 2 5 3 1 4 > check.log");     //1
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 2 3 5 4 1 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 2 3 5 4 1 | ./checker_Mac 2 3 5 4 1 > check.log");    //2
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 2 1 5 4 3 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 2 1 5 4 3 | ./checker_Mac 2 1 5 4 3 > check.log");  //3
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 2 3 1 4 5 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 2 3 1 4 5 | ./checker_Mac 2 3 1 4 5 > check.log");   //4
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 2 5 1 3 4 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 2 5 1 3 4 | ./checker_Mac 2 5 1 3 4 > check.log");   // 5
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 3 4 1 2 5 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 3 4 1 2 5 | ./checker_Mac 3 4 1 2 5 > check.log");    //6
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 5 3 4 1 2 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 5 3 4 1 2 | ./checker_Mac 5 3 4 1 2 > check.log");    //7
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 5 3 4 2 1 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 5 3 4 2 1 | ./checker_Mac 5 3 4 2 1 > check.log");   //8
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 5 4 3 2 1 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 5 4 3 2 1 | ./checker_Mac 5 4 3 2 1 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 5 3 1 2 4 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 5 3 1 2 4 | ./checker_Mac 5 3 1 2 4 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 5 1 3 4 2 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 5 1 3 4 2 | ./checker_Mac 5 1 3 4 2 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 2 5 3 4 1 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 2 5 3 4 1 | ./checker_Mac 2 5 3 4 1 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 5 4 1 2 3 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 5 4 1 2 3 | ./checker_Mac 5 4 1 2 3 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 1 2 4 5 3 | wc -l | awk -v ORS="" '{print$1}' > test.log &&  ./push_swap 1 2 4 5 3 | ./checker_Mac 1 2 4 5 3 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 1 3 5 4 2 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 1 3 5 4 2 | ./checker_Mac 1 3 5 4 2 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 1 5 4 3 2 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 1 5 4 3 2 | ./checker_Mac 1 5 4 3 2 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 1 2 3 5 4 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 1 2 3 5 4 | ./checker_Mac 1 2 3 5 4 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 1 4 2 5 3 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 1 4 2 5 3 | ./checker_Mac 1 4 2 5 3 > check.log");
                fd = open("test.log", O_RDWR);
                fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 4 5 3 2 1 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 4 5 3 2 1 | ./checker_Mac 4 5 3 2 1 > check.log");
                 fd = open("test.log", O_RDWR);
                 fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 4 3 5 2 1 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 4 3 5 2 1 | ./checker_Mac 4 3 5 2 1 > check.log");
                 fd = open("test.log", O_RDWR);
                 fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 4 2 3 5 1 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 4 2 3 5 1 | ./checker_Mac 4 2 3 5 1 > check.log");
                 fd = open("test.log", O_RDWR);
                 fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 4 2 1 3 5 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 4 2 1 3 5 | ./checker_Mac 4 2 1 3 5 > check.log");
                 fd = open("test.log", O_RDWR);
                 fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        system("./push_swap 4 3 2 1 5 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 4 3 2 1 5 | ./checker_Mac 4 3 2 1 5 > check.log");
                 fd = open("test.log", O_RDWR);
                 fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 12 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
    }
    else if(atoi(av[1]) == 100)
    {
        system("./push_swap 15 82 83 93 22 68 92 59 23 69 44 49 30 36 38 80 67 71 61 85 20 39 16 26 18 10 73 50 66 35 70 84 52 88 17 47 63 31 100 96 1 25 37 97 45 65 89 6 13 7 94 72 78 81 11 3 29 24 60 34 91 53 75 41 77 74 46 19 40 43 57 98 99 79 28 5 21 27 32 56 62 55 9 8 64 42 87 51 54 58 4 90 76 86 95 2 33 48 12 14 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 15 82 83 93 22 68 92 59 23 69 44 49 30 36 38 80 67 71 61 85 20 39 16 26 18 10 73 50 66 35 70 84 52 88 17 47 63 31 100 96 1 25 37 97 45 65 89 6 13 7 94 72 78 81 11 3 29 24 60 34 91 53 75 41 77 74 46 19 40 43 57 98 99 79 28 5 21 27 32 56 62 55 9 8 64 42 87 51 54 58 4 90 76 86 95 2 33 48 12 14 | ./checker_Mac 15 82 83 93 22 68 92 59 23 69 44 49 30 36 38 80 67 71 61 85 20 39 16 26 18 10 73 50 66 35 70 84 52 88 17 47 63 31 100 96 1 25 37 97 45 65 89 6 13 7 94 72 78 81 11 3 29 24 60 34 91 53 75 41 77 74 46 19 40 43 57 98 99 79 28 5 21 27 32 56 62 55 9 8 64 42 87 51 54 58 4 90 76 86 95 2 33 48 12 14 > check.log");
        fd = open("test.log", O_RDWR);
        fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 700 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else if (atoi(dst) <= 900 && check[0] == 'O')
            printf("%s : %s4 pointes\n%s", dst, BLUE, DEFFAULT);
        else if (atoi(dst) <= 1100 && check[0] == 'O')
            printf("%s : %s3 pointes\n%s", dst, YOLLOW, DEFFAULT);    
        else
            printf("%s : %sKO%s \n", dst,RED, DEFFAULT);
        free(dst);
        
        system("./push_swap 64 17 56 43 44 73 20 63 91 28 84 61 30 38 74 32 59 11 72 93 49 2 100 37 7 23 88 9 6 36 52 92 68 79 41 53 75 85 82 46 3 29 13 5 48 1 78 8 71 19 54 42 96 31 24 58 22 99 77 21 87 40 70 14 69 25 12 67 10 95 26 39 60 4 51 83 94 27 35 34 50 65 15 97 90 57 33 45 81 89 55 62 47 66 76 16 98 86 18 80 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 64 17 56 43 44 73 20 63 91 28 84 61 30 38 74 32 59 11 72 93 49 2 100 37 7 23 88 9 6 36 52 92 68 79 41 53 75 85 82 46 3 29 13 5 48 1 78 8 71 19 54 42 96 31 24 58 22 99 77 21 87 40 70 14 69 25 12 67 10 95 26 39 60 4 51 83 94 27 35 34 50 65 15 97 90 57 33 45 81 89 55 62 47 66 76 16 98 86 18 80 | ./checker_Mac 64 17 56 43 44 73 20 63 91 28 84 61 30 38 74 32 59 11 72 93 49 2 100 37 7 23 88 9 6 36 52 92 68 79 41 53 75 85 82 46 3 29 13 5 48 1 78 8 71 19 54 42 96 31 24 58 22 99 77 21 87 40 70 14 69 25 12 67 10 95 26 39 60 4 51 83 94 27 35 34 50 65 15 97 90 57 33 45 81 89 55 62 47 66 76 16 98 86 18 80 > check.log");
        fd = open("test.log", O_RDWR);
        fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        // dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 700 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else if (atoi(dst) <= 900 && check[0] == 'O')
            printf("%s : %s4 pointes\n%s", dst, BLUE, DEFFAULT);
        else if (atoi(dst) <= 1100 && check[0] == 'O')
            printf("%s : %s3 pointes\n%s", dst, YOLLOW, DEFFAULT);    
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        
        system("./push_swap 85 90 17 56 5 1 30 72 61 87 35 15 80 32 66 96 47 22 78 9 28 24 53 79 52 88 42 12 70 63 59 91 13 27 46 75 54 55 48 65 36 31 45 11 50 93 33 2 86 19 62 98 92 21 76 94 49 67 29 84 8 68 6 64 100 58 60 18 23 38 26 3 73 71 81 44 77 99 37 95 4 57 25 83 7 89 40 43 10 41 16 69 20 51 97 82 14 34 74 39 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 85 90 17 56 5 1 30 72 61 87 35 15 80 32 66 96 47 22 78 9 28 24 53 79 52 88 42 12 70 63 59 91 13 27 46 75 54 55 48 65 36 31 45 11 50 93 33 2 86 19 62 98 92 21 76 94 49 67 29 84 8 68 6 64 100 58 60 18 23 38 26 3 73 71 81 44 77 99 37 95 4 57 25 83 7 89 40 43 10 41 16 69 20 51 97 82 14 34 74 39 | ./checker_Mac 85 90 17 56 5 1 30 72 61 87 35 15 80 32 66 96 47 22 78 9 28 24 53 79 52 88 42 12 70 63 59 91 13 27 46 75 54 55 48 65 36 31 45 11 50 93 33 2 86 19 62 98 92 21 76 94 49 67 29 84 8 68 6 64 100 58 60 18 23 38 26 3 73 71 81 44 77 99 37 95 4 57 25 83 7 89 40 43 10 41 16 69 20 51 97 82 14 34 74 39 > check.log");
          fd = open("test.log", O_RDWR);
        fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        // dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 700 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else if (atoi(dst) <= 900 && check[0] == 'O')
            printf("%s : %s4 pointes\n%s", dst, BLUE, DEFFAULT);
        else if (atoi(dst) <= 1100 && check[0] == 'O')
            printf("%s : %s3 pointes\n%s", dst, YOLLOW, DEFFAULT);    
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
        
        system("./push_swap 48 19 49 59 36 30 8 80 21 39 44 7 68 57 97 81 24 58 15 74 66 95 88 43 73 29 11 25 65 33 6 13 12 55 78 1 90 100 83 28 50 2 94 51 84 63 86 52 35 54 16 42 26 62 69 64 4 93 17 87 47 32 96 61 27 76 56 34 53 14 75 60 22 3 92 89 37 9 38 71 23 41 79 72 77 45 40 99 91 98 10 46 67 20 82 18 31 85 5 70 | wc -l | awk -v ORS="" '{print$1}' > test.log && ./push_swap 48 19 49 59 36 30 8 80 21 39 44 7 68 57 97 81 24 58 15 74 66 95 88 43 73 29 11 25 65 33 6 13 12 55 78 1 90 100 83 28 50 2 94 51 84 63 86 52 35 54 16 42 26 62 69 64 4 93 17 87 47 32 96 61 27 76 56 34 53 14 75 60 22 3 92 89 37 9 38 71 23 41 79 72 77 45 40 99 91 98 10 46 67 20 82 18 31 85 5 70 | ./checker_Mac 48 19 49 59 36 30 8 80 21 39 44 7 68 57 97 81 24 58 15 74 66 95 88 43 73 29 11 25 65 33 6 13 12 55 78 1 90 100 83 28 50 2 94 51 84 63 86 52 35 54 16 42 26 62 69 64 4 93 17 87 47 32 96 61 27 76 56 34 53 14 75 60 22 3 92 89 37 9 38 71 23 41 79 72 77 45 40 99 91 98 10 46 67 20 82 18 31 85 5 70 > check.log");
             fd = open("test.log", O_RDWR);
        fd_check = open("check.log", O_RDWR);
        dst = (char *)malloc(5);
        // dst[5] = '\0';
        read(fd, dst, 4);
        read(fd_check, check, 2);
        if (atoi(dst) <= 700 && check[0] == 'O')
            printf("%s : %s✅%s\n", dst, GREEN, DEFFAULT);
        else if (atoi(dst) <= 900 && check[0] == 'O')
            printf("%s : %s4 pointes\n%s", dst, BLUE, DEFFAULT);
        else if (atoi(dst) <= 1100 && check[0] == 'O')
            printf("%s : %s3 pointes\n%s", dst, YOLLOW, DEFFAULT);    
        else
            printf("%s : %sKO%s\n", dst, RED, DEFFAULT);
        free(dst);
    }
}
