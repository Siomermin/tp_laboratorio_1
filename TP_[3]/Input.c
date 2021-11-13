#include "Input.h"

int Utn_GetInt(int* refInt,char message[], char errorMessage[], int min ,int max, int attempts)
{
    int retorno = ERROR;
    int auxInt;

    if(refInt!=NULL && message != NULL && errorMessage != NULL && min <= max  && attempts >= 0)
    {
        do
        {
            printf("%s",message);

            if(GetInt(&auxInt) == FUNCIONO && auxInt >= min && auxInt <= max)
            {
                *refInt = auxInt;
                retorno = FUNCIONO;
                break;
            }
            else
            {
                printf("%s",errorMessage);
                attempts--;
            }

        }while(attempts >= 0);

    }

    return retorno;
}

int Utn_GetFloat(float* refFloat,char message[], char errorMessage[], int min ,int max, int attempts)
{
    int retorno =ERROR;
    float auxFloat;

    if(refFloat != NULL && message != NULL && errorMessage != NULL && min <= max && attempts >= 0)
    {
        do
        {
            printf("%s",message);
            if(GetFloat(&auxFloat) == FUNCIONO && auxFloat >= min && auxFloat <= max)
            {
                *refFloat = auxFloat;
                retorno = FUNCIONO;
                break;
            }
            else
            {
                printf("%s",errorMessage);
                attempts--;
            }

        }while(attempts >= 0);
    }

    return retorno;
}

int GetString(char* refAux, int limit)
{
    char auxString[256];
    int retorno = ERROR;

    if(refAux != NULL && limit > 0)
    {
        fflush(stdin);
        fgets(auxString,sizeof(auxString),stdin);

        if(auxString[strlen(auxString) - 1] == '\n')
        {
            auxString[strlen(auxString) - 1] = '\0';
        }
        if(strlen(auxString) <= limit)
        {
            strncpy(refAux,auxString,limit);
            retorno = FUNCIONO;
        }
    }

    return retorno;
}

int GetInt(int* refAux)
{
    char auxString[256];
    int retorno = ERROR;

    if(GetString(auxString, 256) == FUNCIONO && IsInt(auxString) == FUNCIONO)
    {
        *refAux = atoi(auxString);
        retorno = FUNCIONO;
    }

    return retorno;
}

int GetFloat(float* refAux)
{
    char auxString[256];
    int retorno = ERROR;

    if(GetString(auxString,200) == FUNCIONO && IsFloat(auxString) == FUNCIONO)
    {
        *refAux = atof(auxString);
        retorno = FUNCIONO;
    }

    return retorno;
}

int Utn_GetString(char* refAux, int limit, char message[], char errorMessage[], int attempts)
{
    int retorno = ERROR;
    char auxString[limit];

    if(refAux != NULL && limit > 0 && attempts >= 0)
    {
        do
        {
            printf("%s", message);

            if(GetString(auxString,limit) == FUNCIONO && IsChar(auxString) == FUNCIONO)
            {
                strncpy(refAux,auxString,limit);
                retorno = FUNCIONO;
                break;
            }
            else
            {
                printf("%s",errorMessage);
                attempts--;
        	}

        }while(attempts > 0);
    }

    return retorno;
}
