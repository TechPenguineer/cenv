##ifndef C_ENV_H
#define C_ENV_H
typedef struct ENV_STRUCT
{
    enum
    {
        ENV_PATH,
        ENV_PS_MODULE_PATH
    } ENV_Type;
    char* value;
} ENT_t;



##endif