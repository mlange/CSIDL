#include <moca.h>

#include <stdio.h>
#include <stdlib.h>
#include <shlobj.h> 

#include <mocagendef.h>
#include <mocaerr.h>
#include <mislib.h>
#include <oslib.h>
#include <mxmllib.h>


void main(int argc, char *argv[])
{
    char path[1024];

    SHGetFolderPath(NULL, CSIDL_COMMON_APPDATA, NULL, 0, path);

    printf("Directory: %s\n", path);

    exit(0);
}
