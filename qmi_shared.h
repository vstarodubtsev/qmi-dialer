#ifndef QMI_SHARED_H
#define QMI_SHARED_H

//See:
//http://lists.freedesktop.org/archives/libqmi-devel/2012-August/000178.html
#define QMI_DEFAULT_BUF_SIZE 0x1000

//I/F type
#define QMUX_IF_TYPE   0x01

//Service types (that is currently used by qmid)
#define QMI_SERVICE_CTL     0x00
#define QMI_SERVICE_WDS     0x01
#define QMI_SERVICE_DMS     0x02
#define QMI_SERVICE_NAS     0x03

//Variables
#define QMI_RESULT_SUCCESS  0x0000
#define QMI_RESULT_FAILURE  0x0001
#endif