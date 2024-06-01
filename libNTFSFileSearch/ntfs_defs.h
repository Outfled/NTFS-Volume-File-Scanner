#ifndef _NTFS_DEFS_H_
#define _NTFS_DEFS_H_

//--------------------------------------------------------------------------------------
//
// $MFT FILE Record Attribute Types
//
//--------------------------------------------------------------------------------------

#define	MFT_FILERECORD_ATTR_TYPE_STD_INFO               0x10
#define	MFT_FILERECORD_ATTR_TYPE_ATTRIBUTE_LIST         0x20
#define MFT_FILERECORD_ATTR_TYPE_FILENAME               0x30
#define	MFT_FILERECORD_ATTR_TYPE_OBJECT_ID              0x40
#define MFT_FILERECORD_ATTR_TYPE_SECURITY_DESCRIPTOR    0x50
#define	MFT_FILERECORD_ATTR_TYPE_VOLUME_NAME            0x60
#define	MFT_FILERECORD_ATTR_TYPE_VOLUME_INFORMATION     0x70
#define	MFT_FILERECORD_ATTR_TYPE_DATA                   0x80
#define	MFT_FILERECORD_ATTR_TYPE_INDEX_ROOT             0x90
#define	MFT_FILERECORD_ATTR_TYPE_INDEX_ALLOCATION       0xA0
#define	MFT_FILERECORD_ATTR_TYPE_BITMAP                 0xB0
#define	MFT_FILERECORD_ATTR_REPARSE_POINT               0xC0
#define	MFT_FILERECORD_ATTR_EA_INFORMATION              0xD0
#define MFT_FILERECORD_ATTR_TYPE_EA                     0xE0
#define	MFT_FILERECORD_ATTR_TYPE_LOGGED_UTILITY_STREAM  0x100
#define	MFT_FILERECORD_ATTR_TYPE_STOP_TAG               0xFFFFFFFF

#endif //!_NTFS_DEFS_H_
