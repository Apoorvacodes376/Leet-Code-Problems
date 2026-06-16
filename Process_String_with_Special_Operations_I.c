// char* rem(char* s)
// {
//     int l=strlen(s);
//     int x=l-1;
//     // char new[l];
//     char* new = (char*)malloc(l * sizeof(char));
//     for(int i=0;i<x;i++)
//     {
//         new[i]=s[i];
//     }
//     new[l-1]='\0';
//     return new;
// }

// char* rev(char* s)
// {
//     int l=strlen(s);
//     // int x=l-1;
//     // char new[l];
//     // char* new = (char*)malloc((l) * sizeof(char));
//     char* new = (char*)malloc((l+1) * sizeof(char));
//     for(int i=0;i<l;i++)
//     {
//         new[i] = s[l-1-i];
//     }
//     new[l]='\0';
//     return new;
// }

// char* dup(char* s)
// {
//     int l=strlen(s);
//     char* new = (char*)malloc((l+l+1) * sizeof(char));

//     for(int i=0;i<l;i++)
//     {
//         new[i]=s[i];
//     }
//     for(int j=l;j<l+l;j++)
//     {
//         new[j]=s[j-1];
//     }
//     new[2*l] = '\0';
//     return new;
// }

// char* processStr(char* s) {
//     int l=strlen(s);
//     // char final[l];
//     // final=rem(s);
//     char* temp = rem(s);
//     char *ans=rev(temp);
//     char *fin=dup(ans);
//     free(temp);
//     free(ans);
//     return fin;
    
// }
char* processStr(char* s) {
    int n = strlen(s);

    // Allocate enough space (problem constraints keep final size manageable)
    char* result = (char*)malloc(1000000 * sizeof(char));
    int len = 0;

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c >= 'a' && c <= 'z') {
            result[len++] = c;
        }
        else if (c == '*') {
            if (len > 0) len--;
        }
        else if (c == '#') {
            int currLen = len;
            for (int j = 0; j < currLen; j++) {
                result[len++] = result[j];
            }
        }
        else if (c == '%') {
            for (int l = 0, r = len - 1; l < r; l++, r--) {
                char temp = result[l];
                result[l] = result[r];
                result[r] = temp;
            }
        }
    }

    result[len] = '\0';
    return result;
}
