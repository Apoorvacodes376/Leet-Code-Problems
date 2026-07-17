bool rotateString(char* s, char* goal) {
    int n = strlen(s);
        if(n != strlen(goal))
            return 0;
        char *str = malloc(2*n + 1);
        strcpy(str,s);
        strcat(str,s);
        char *result = strstr(str,goal);
        free(str);
        return result != NULL;
}
