file(GLOB myLib ../myLib/*c)

idf_component_register(SRCS "main.c" ${myLib}
                    INCLUDE_DIRS "." "../myLib")