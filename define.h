#pragma once 
#ifndef DEFINE_H
#define DEFINE_H

/*
    input define setting
*/
#define min(m,n) ((m) < (n) ? (m):(n))
#define max(m,n) ((m) > (n) ? (m):(n))
#define GN_NONNEG 01
#define GN_GT_0
#define GN_ANY_BASE 0100
#define GN_BASE_8  0200
#define GN_BASE_16 0400
#define sival_int sigval_int
#define sival_ptr sigval_ptr
#define BUF_SIZE 500

//#define S_IFMT      0170000  

/*
    Linux OS
    FILE I/O define Setting
*/
/* #define file type */ 
// #define S_IFSOCK    0140000    //socket 
// #define S_IFLNK     0120000     //symbolic link 
// #define S_IFREG     0100000     //regular file 
// #define S_IFBLK     0060000     //block device 
// #define S_IFDIR     0040000     //directory 
// #define S_IFCHR     0020000     //character device 
// #define S_IFIFO     0010000     //FIFO 

/* Set special privileges bit */
// #define S_ISUID     0004000     //set-user-ID bit 
// #define S_ISGID     0002000     //set-group-ID bit 
// #define S_ISVTX     0001000     //sticky bit (like value at "chmod") 
// #define S_IRWXU     00700       //mask for file owner permissions 
// #define S_IRUSR     00400       //owner has read permission 
// #define S_IWUSR     00200       //owner has write permission 
// #define S_IXUSR     00100       //owner has execute permission 
// #define S_IRWXG     00070       //mask for group permissions 
// #define S_IRGRP     00040       //group has read permission 
// #define S_IWGRP     00020       //group has write permission 
// #define S_IXGRP     00010       //group has execute permission
// #define S_IRWXO     00007       //mask for permissions for others (not in group) 
// #define S_IROTH     00004       //others have read permission 
// #define S_IWOTH     00002       //others have write permission 
// #define S_IXOTH     00001       //others have execute permission

#endif

/* 
    typedef enum 
*/
typedef enum { FALSE, TRUE } Boolean;

#ifdef TRUE
#undef TRUE
#endif

#ifdef FALSE
#undef FALSE
#endif

#if defined(__sgi)
typedef int socklen_t;
#endif

#ifndef BUF_SIZE      
#define BUF_SIZE 1024
#endif

#if defined(__sun)
#include <sys/file.h>
#endif

#if ! defined(O_ASYNC) && defined(FASYNC)
#define O_ASYNC FASYNC
#endif

#if defined(MAP_ANON) && ! defined(MAP_ANONVMOUS)
#define MAP_ANOVMOUS MAP_ANON

#endif

#if ! defined(O_SYNC) && defined(O_FSYNC)
#define O_SYNC O_FSYNC
#endif

#ifdef _GNUC_
_attribute_ ((_noreturn_))
#endif

#if defined(__FreeBSD__)

#ifdef _GUNC_
#define NORETURN _attribute_ ((_noreturn_))
#else
#define NORETURN
#endif

#endif