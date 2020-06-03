#include <stdio.h>

// str1에서 str2가 나타나는 위치를 반환한다.
char* strstr(char* str1, char* str2)
{ 
    int s1length = 0;
    int s2length = 0;
    int result = 0;
    
    for (int i = 0;; i++)
    {
        if (str1[i] == 0)
            break;
        s1length++;
    }
    for (int i=0;;i++)
    {
        if (str2[i] == 0)
            break;
        s2length++;
    }
    for (int i = 0; i < s1length; i++)
    {
  
        int j = 0;
        for (j = 0; j < s2length; j++)
        {
            if (str1[i+j] != str2[j])
                break;
            
            result = i;
           

            
        }
        if (j == s2length)
            return str1 + i;
        
  
    }

    
    return NULL;

}

// insert code here

int main()
{
    char s1[100] = "abcdeabc";
    char s2[100] = "cde";
    char* s3 = strstr(s1, s2);
    printf("%s\n", s3);
}