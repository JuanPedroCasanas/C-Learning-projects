
set firstFolder=1
set secondFolder=%1

@echo off
FOR /L %%x IN (%firstFolder%, 1, %secondFolder%) Do (
    md %%x
    cd %%x
    echo #include ^<stdio.h^> > %%x.c
    echo: >> %%x.c
    echo int main ^(void^) >> %%x.c
    echo ^{ >> %%x.c
    echo: >> %%x.c
    echo return 0; >> %%x.c
    echo ^} >> %%x.c
    cd ..
)

