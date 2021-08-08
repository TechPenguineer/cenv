##ifndef C_ENV_H
#define C_ENV_H
typedef struct ENV_STRUCT
{
    enum
    {
        ENV_PATH,
        ENV_PS_MODULE_PATH
    } ENV_Type;
    char type[];
} ENT_t;

ENV_t* set_env(char type[], char value[] )

##endif