aux_source_directory(./log LOG)
aux_source_directory(./api API)
add_library(upgrade upgrade.c
                    ${LOG}
                    ${API})

