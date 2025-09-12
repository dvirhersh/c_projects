#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

static int NumOfEnvArgs(char *envp[]);
static char **CopyEnvArgsToBuffLower(char *envp[], size_t num_of_env_args);
static char *LowerCase(const char *ch);

char **BufferLowerCase(char *envp[])
{
    int num_of_env_args = NumOfEnvArgs(envp);
    char **buff_lower_case = CopyEnvArgsToBuffLower(envp, num_of_env_args);
    assert(buff_lower_case);
    return buff_lower_case;
}

static int NumOfEnvArgs(char *envp[])
{
    int num_of_env_args = 0;
    int i = 0;
    for (; envp[i] != NULL; i++)
        num_of_env_args++;
    return num_of_env_args;
}

static char **CopyEnvArgsToBuffLower(char *envp[], size_t num_of_env_args)
{
    size_t i = 0;
    char **buff = (char **)malloc((num_of_env_args + 1) * sizeof(char *));
    assert(buff);

    for (; i < num_of_env_args; i++)
        buff[i] = LowerCase(envp[i]);
    buff[num_of_env_args] = NULL;

    return buff;
}

static char *LowerCase(const char *str)
{
    size_t i = 0;
    size_t len = strlen(str);
    char *str_lower_case = (char *)malloc(len + 1);
    assert(str_lower_case);

    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str_lower_case[i] = str[i] + 'a' - 'A';
        else
            str_lower_case[i] = str[i];
        str_lower_case[len] = '\0';
    }

    return str_lower_case;
}

void PrintBuffer(char **ch)
{
    int i = 0;
    for (; ch[i] != NULL; i++)
    {
        printf("%s\n", ch[i]);
    }
}

void FreeBuffer(char **ch)
{
    int i = 0;
    for (i = 0; ch[i] != NULL; i++)
    {
        free(ch[i]);
    }
}
