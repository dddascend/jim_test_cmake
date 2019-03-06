#将sr所有源文件定义到一个变量下
aux_source_directory(./src DIR_DEBUG_SRCS)

add_library(f_debugger ${DIR_DEBUG_SRCS})

