cmake_minimum_required(VERSION 2.6)
project(qmid)

add_definitions(-O2 -Wall -Wextra)

add_executable(qmid
    qmi_ctl.c
    qmi_dialer.c
    qmi_helpers.c
    qmi_nas.c
    qmi_wds.c
    qmi_dms.c
)

install (TARGETS qmid RUNTIME DESTINATION sbin)
