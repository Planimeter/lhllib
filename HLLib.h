typedef unsigned char hlBool;
typedef char hlChar;



typedef unsigned short hlWChar;

typedef unsigned char hlByte;
typedef signed short hlShort;
typedef unsigned short hlUShort;
typedef signed int hlInt;
typedef unsigned int hlUInt;
typedef signed long hlLong;
typedef unsigned long hlULong;
typedef float hlSingle;
typedef double hlDouble;
typedef void hlVoid;
 #include <stdint.h>


 typedef int64_t hlLongLong;
 typedef uint64_t hlULongLong;

 typedef uint8_t hlUInt8;
 typedef uint16_t hlUInt16;
 typedef uint32_t hlUInt32;
 typedef uint64_t hlUInt64;


typedef hlSingle hlFloat;
typedef enum
{
 HL_VERSION = 0,
 HL_ERROR,
 HL_ERROR_SYSTEM,
 HL_ERROR_SHORT_FORMATED,
 HL_ERROR_LONG_FORMATED,
 HL_PROC_OPEN,
 HL_PROC_CLOSE,
 HL_PROC_READ,
 HL_PROC_WRITE,
 HL_PROC_SEEK,
 HL_PROC_TELL,
 HL_PROC_SIZE,
 HL_PROC_EXTRACT_ITEM_START,
 HL_PROC_EXTRACT_ITEM_END,
 HL_PROC_EXTRACT_FILE_PROGRESS,
 HL_PROC_VALIDATE_FILE_PROGRESS,
 HL_OVERWRITE_FILES,
 HL_PACKAGE_BOUND,
 HL_PACKAGE_ID,
 HL_PACKAGE_SIZE,
 HL_PACKAGE_TOTAL_ALLOCATIONS,
 HL_PACKAGE_TOTAL_MEMORY_ALLOCATED,
 HL_PACKAGE_TOTAL_MEMORY_USED,
 HL_READ_ENCRYPTED,
 HL_FORCE_DEFRAGMENT,
 HL_PROC_DEFRAGMENT_PROGRESS,
 HL_PROC_DEFRAGMENT_PROGRESS_EX,
 HL_PROC_SEEK_EX,
 HL_PROC_TELL_EX,
 HL_PROC_SIZE_EX
} HLOption;

typedef enum
{
 HL_MODE_INVALID = 0x00,
 HL_MODE_READ = 0x01,
 HL_MODE_WRITE = 0x02,
 HL_MODE_CREATE = 0x04,
 HL_MODE_VOLATILE = 0x08,
 HL_MODE_NO_FILEMAPPING = 0x10,
 HL_MODE_QUICK_FILEMAPPING = 0x20
} HLFileMode;

typedef enum
{
 HL_SEEK_BEGINNING = 0,
 HL_SEEK_CURRENT,
 HL_SEEK_END
} HLSeekMode;

typedef enum
{
 HL_ITEM_NONE = 0,
 HL_ITEM_FOLDER,
 HL_ITEM_FILE
} HLDirectoryItemType;

typedef enum
{
 HL_ORDER_ASCENDING = 0,
 HL_ORDER_DESCENDING
} HLSortOrder;

typedef enum
{
 HL_FIELD_NAME = 0,
 HL_FIELD_SIZE
} HLSortField;

typedef enum
{
 HL_FIND_FILES = 0x01,
 HL_FIND_FOLDERS = 0x02,
 HL_FIND_NO_RECURSE = 0x04,
 HL_FIND_CASE_SENSITIVE = 0x08,
 HL_FIND_MODE_STRING = 0x10,
 HL_FIND_MODE_SUBSTRING = 0x20,
 HL_FIND_MODE_WILDCARD = 0x00,
 HL_FIND_ALL = HL_FIND_FILES | HL_FIND_FOLDERS
} HLFindType;

typedef enum
{
 HL_STREAM_NONE = 0,
 HL_STREAM_FILE,
 HL_STREAM_GCF,
 HL_STREAM_MAPPING,
 HL_STREAM_MEMORY,
 HL_STREAM_PROC,
 HL_STREAM_NULL
} HLStreamType;

typedef enum
{
 HL_MAPPING_NONE = 0,
 HL_MAPPING_FILE,
 HL_MAPPING_MEMORY,
 HL_MAPPING_STREAM
} HLMappingType;

typedef enum
{
 HL_PACKAGE_NONE = 0,
 HL_PACKAGE_BSP,
 HL_PACKAGE_GCF,
 HL_PACKAGE_PAK,
 HL_PACKAGE_VBSP,
 HL_PACKAGE_WAD,
 HL_PACKAGE_XZP,
 HL_PACKAGE_ZIP,
 HL_PACKAGE_NCF,
 HL_PACKAGE_VPK,
 HL_PACKAGE_SGA
} HLPackageType;

typedef enum
{
 HL_ATTRIBUTE_INVALID = 0,
 HL_ATTRIBUTE_BOOLEAN,
 HL_ATTRIBUTE_INTEGER,
 HL_ATTRIBUTE_UNSIGNED_INTEGER,
 HL_ATTRIBUTE_FLOAT,
 HL_ATTRIBUTE_STRING
} HLAttributeType;

typedef enum
{
 HL_BSP_PACKAGE_VERSION = 0,
 HL_BSP_PACKAGE_COUNT,
 HL_BSP_ITEM_WIDTH = 0,
 HL_BSP_ITEM_HEIGHT,
 HL_BSP_ITEM_PALETTE_ENTRIES,
 HL_BSP_ITEM_COUNT,

 HL_GCF_PACKAGE_VERSION = 0,
 HL_GCF_PACKAGE_ID,
 HL_GCF_PACKAGE_ALLOCATED_BLOCKS,
 HL_GCF_PACKAGE_USED_BLOCKS,
 HL_GCF_PACKAGE_BLOCK_LENGTH,
 HL_GCF_PACKAGE_LAST_VERSION_PLAYED,
 HL_GCF_PACKAGE_COUNT,
 HL_GCF_ITEM_ENCRYPTED = 0,
 HL_GCF_ITEM_COPY_LOCAL,
 HL_GCF_ITEM_OVERWRITE_LOCAL,
 HL_GCF_ITEM_BACKUP_LOCAL,
 HL_GCF_ITEM_FLAGS,
 HL_GCF_ITEM_FRAGMENTATION,
 HL_GCF_ITEM_COUNT,

 HL_NCF_PACKAGE_VERSION = 0,
 HL_NCF_PACKAGE_ID,
 HL_NCF_PACKAGE_LAST_VERSION_PLAYED,
 HL_NCF_PACKAGE_COUNT,
 HL_NCF_ITEM_ENCRYPTED = 0,
 HL_NCF_ITEM_COPY_LOCAL,
 HL_NCF_ITEM_OVERWRITE_LOCAL,
 HL_NCF_ITEM_BACKUP_LOCAL,
 HL_NCF_ITEM_FLAGS,
 HL_NCF_ITEM_COUNT,

 HL_PAK_PACKAGE_COUNT = 0,
 HL_PAK_ITEM_COUNT = 0,

 HL_SGA_PACKAGE_VERSION_MAJOR = 0,
 HL_SGA_PACKAGE_VERSION_MINOR,
 HL_SGA_PACKAGE_MD5_FILE,
 HL_SGA_PACKAGE_NAME,
 HL_SGA_PACKAGE_MD5_HEADER,
 HL_SGA_PACKAGE_COUNT,
 HL_SGA_ITEM_SECTION_ALIAS = 0,
 HL_SGA_ITEM_SECTION_NAME,
 HL_SGA_ITEM_MODIFIED,
 HL_SGA_ITEM_TYPE,
 HL_SGA_ITEM_CRC,
 HL_SGA_ITEM_VERIFICATION,
 HL_SGA_ITEM_COUNT,

 HL_VBSP_PACKAGE_VERSION = 0,
 HL_VBSP_PACKAGE_MAP_REVISION,
 HL_VBSP_PACKAGE_COUNT,
 HL_VBSP_ITEM_VERSION = 0,
 HL_VBSP_ITEM_FOUR_CC,
 HL_VBSP_ZIP_PACKAGE_DISK,
 HL_VBSP_ZIP_PACKAGE_COMMENT,
 HL_VBSP_ZIP_ITEM_CREATE_VERSION,
 HL_VBSP_ZIP_ITEM_EXTRACT_VERSION,
 HL_VBSP_ZIP_ITEM_FLAGS,
 HL_VBSP_ZIP_ITEM_COMPRESSION_METHOD,
 HL_VBSP_ZIP_ITEM_CRC,
 HL_VBSP_ZIP_ITEM_DISK,
 HL_VBSP_ZIP_ITEM_COMMENT,
 HL_VBSP_ITEM_COUNT,

 HL_VPK_PACKAGE_Archives = 0,
 HL_VPK_PACKAGE_Version,
 HL_VPK_PACKAGE_COUNT,
 HL_VPK_ITEM_PRELOAD_BYTES = 0,
 HL_VPK_ITEM_ARCHIVE,
 HL_VPK_ITEM_CRC,
 HL_VPK_ITEM_COUNT,

 HL_WAD_PACKAGE_VERSION = 0,
 HL_WAD_PACKAGE_COUNT,
 HL_WAD_ITEM_WIDTH = 0,
 HL_WAD_ITEM_HEIGHT,
 HL_WAD_ITEM_PALETTE_ENTRIES,
 HL_WAD_ITEM_MIPMAPS,
 HL_WAD_ITEM_COMPRESSED,
 HL_WAD_ITEM_TYPE,
 HL_WAD_ITEM_COUNT,

 HL_XZP_PACKAGE_VERSION = 0,
 HL_XZP_PACKAGE_PRELOAD_BYTES,
 HL_XZP_PACKAGE_COUNT,
 HL_XZP_ITEM_CREATED = 0,
 HL_XZP_ITEM_PRELOAD_BYTES,
 HL_XZP_ITEM_COUNT,

 HL_ZIP_PACKAGE_DISK = 0,
 HL_ZIP_PACKAGE_COMMENT,
 HL_ZIP_PACKAGE_COUNT,
 HL_ZIP_ITEM_CREATE_VERSION = 0,
 HL_ZIP_ITEM_EXTRACT_VERSION,
 HL_ZIP_ITEM_FLAGS,
 HL_ZIP_ITEM_COMPRESSION_METHOD,
 HL_ZIP_ITEM_CRC,
 HL_ZIP_ITEM_DISK,
 HL_ZIP_ITEM_COMMENT,
 HL_ZIP_ITEM_COUNT
} HLPackageAttribute;

typedef enum
{
 HL_VALIDATES_OK = 0,
 HL_VALIDATES_ASSUMED_OK,
 HL_VALIDATES_INCOMPLETE,
 HL_VALIDATES_CORRUPT,
 HL_VALIDATES_CANCELED,
 HL_VALIDATES_ERROR
} HLValidation;

typedef struct
{
 HLAttributeType eAttributeType;
 hlChar lpName[252];
 union
 {
  struct
  {
   hlBool bValue;
  } Boolean;
  struct
  {
   hlInt iValue;
  } Integer;
  struct
  {
   hlUInt uiValue;
   hlBool bHexadecimal;
  } UnsignedInteger;
  struct
  {
   hlFloat fValue;
  } Float;
  struct
  {
   hlChar lpValue[256];
  } String;
 } Value;
} HLAttribute;

typedef hlVoid HLDirectoryItem;
typedef hlVoid HLStream;

typedef hlBool (*POpenProc) (hlUInt, hlVoid *);
typedef hlVoid (*PCloseProc)(hlVoid *);
typedef hlUInt (*PReadProc) (hlVoid *, hlUInt, hlVoid *);
typedef hlUInt (*PWriteProc) (const hlVoid *, hlUInt, hlVoid *);
typedef hlULongLong (*PSeekExProc) (hlLongLong, HLSeekMode, hlVoid *);
typedef hlUInt (*PTellProc) (hlVoid *);
typedef hlULongLong (*PTellExProc) (hlVoid *);
typedef hlUInt (*PSizeProc) (hlVoid *);
typedef hlULongLong (*PSizeExProc) (hlVoid *);

typedef hlVoid (*PExtractItemStartProc) (const HLDirectoryItem *pItem);
typedef hlVoid (*PExtractItemEndProc) (const HLDirectoryItem *pItem, hlBool bSuccess);
typedef hlVoid (*PExtractFileProgressProc) (const HLDirectoryItem *pFile, hlUInt uiBytesExtracted, hlUInt uiBytesTotal, hlBool *pCancel);
typedef hlVoid (*PValidateFileProgressProc) (const HLDirectoryItem *pFile, hlUInt uiBytesValidated, hlUInt uiBytesTotal, hlBool *pCancel);
typedef hlVoid (*PDefragmentProgressProc) (const HLDirectoryItem *pFile, hlUInt uiFilesDefragmented, hlUInt uiFilesTotal, hlUInt uiBytesDefragmented, hlUInt uiBytesTotal, hlBool *pCancel);
typedef hlVoid (*PDefragmentProgressExProc) (const HLDirectoryItem *pFile, hlUInt uiFilesDefragmented, hlUInt uiFilesTotal, hlULongLong uiBytesDefragmented, hlULongLong uiBytesTotal, hlBool *pCancel);
__attribute__ ((visibility("default"))) hlVoid hlInitialize();
__attribute__ ((visibility("default"))) hlVoid hlShutdown();





__attribute__ ((visibility("default"))) hlBool hlGetBoolean(HLOption eOption);
__attribute__ ((visibility("default"))) hlBool hlGetBooleanValidate(HLOption eOption, hlBool *pValue);
__attribute__ ((visibility("default"))) hlVoid hlSetBoolean(HLOption eOption, hlBool bValue);

__attribute__ ((visibility("default"))) hlInt hlGetInteger(HLOption eOption);
__attribute__ ((visibility("default"))) hlBool hlGetIntegerValidate(HLOption eOption, hlInt *pValue);
__attribute__ ((visibility("default"))) hlVoid hlSetInteger(HLOption eOption, hlInt iValue);

__attribute__ ((visibility("default"))) hlUInt hlGetUnsignedInteger(HLOption eOption);
__attribute__ ((visibility("default"))) hlBool hlGetUnsignedIntegerValidate(HLOption eOption, hlUInt *pValue);
__attribute__ ((visibility("default"))) hlVoid hlSetUnsignedInteger(HLOption eOption, hlUInt iValue);

__attribute__ ((visibility("default"))) hlLongLong hlGetLongLong(HLOption eOption);
__attribute__ ((visibility("default"))) hlBool hlGetLongLongValidate(HLOption eOption, hlLongLong *pValue);
__attribute__ ((visibility("default"))) hlVoid hlSetLongLong(HLOption eOption, hlLongLong iValue);

__attribute__ ((visibility("default"))) hlULongLong hlGetUnsignedLongLong(HLOption eOption);
__attribute__ ((visibility("default"))) hlBool hlGetUnsignedLongLongValidate(HLOption eOption, hlULongLong *pValue);
__attribute__ ((visibility("default"))) hlVoid hlSetUnsignedLongLong(HLOption eOption, hlULongLong iValue);

__attribute__ ((visibility("default"))) hlFloat hlGetFloat(HLOption eOption);
__attribute__ ((visibility("default"))) hlBool hlGetFloatValidate(HLOption eOption, hlFloat *pValue);
__attribute__ ((visibility("default"))) hlVoid hlSetFloat(HLOption eOption, hlFloat fValue);

__attribute__ ((visibility("default"))) const hlChar *hlGetString(HLOption eOption);
__attribute__ ((visibility("default"))) hlBool hlGetStringValidate(HLOption eOption, const hlChar **pValue);
__attribute__ ((visibility("default"))) hlVoid hlSetString(HLOption eOption, const hlChar *lpValue);

__attribute__ ((visibility("default"))) const hlVoid *hlGetVoid(HLOption eOption);
__attribute__ ((visibility("default"))) hlBool hlGetVoidValidate(HLOption eOption, const hlVoid **pValue);
__attribute__ ((visibility("default"))) hlVoid hlSetVoid(HLOption eOption, const hlVoid *pValue);





__attribute__ ((visibility("default"))) hlBool hlAttributeGetBoolean(HLAttribute *pAttribute);
__attribute__ ((visibility("default"))) hlVoid hlAttributeSetBoolean(HLAttribute *pAttribute, const hlChar *lpName, hlBool bValue);

__attribute__ ((visibility("default"))) hlInt hlAttributeGetInteger(HLAttribute *pAttribute);
__attribute__ ((visibility("default"))) hlVoid hlAttributeSetInteger(HLAttribute *pAttribute, const hlChar *lpName, hlInt iValue);

__attribute__ ((visibility("default"))) hlUInt hlAttributeGetUnsignedInteger(HLAttribute *pAttribute);
__attribute__ ((visibility("default"))) hlVoid hlAttributeSetUnsignedInteger(HLAttribute *pAttribute, const hlChar *lpName, hlUInt uiValue, hlBool bHexadecimal);

__attribute__ ((visibility("default"))) hlFloat hlAttributeGetFloat(HLAttribute *pAttribute);
__attribute__ ((visibility("default"))) hlVoid hlAttributeSetFloat(HLAttribute *pAttribute, const hlChar *lpName, hlFloat fValue);

__attribute__ ((visibility("default"))) const hlChar *hlAttributeGetString(HLAttribute *pAttribute);
__attribute__ ((visibility("default"))) hlVoid hlAttributeSetString(HLAttribute *pAttribute, const hlChar *lpName, const hlChar *lpValue);





__attribute__ ((visibility("default"))) HLDirectoryItemType hlItemGetType(const HLDirectoryItem *pItem);

__attribute__ ((visibility("default"))) const hlChar *hlItemGetName(const HLDirectoryItem *pItem);
__attribute__ ((visibility("default"))) hlUInt hlItemGetID(const HLDirectoryItem *pItem);
__attribute__ ((visibility("default"))) const hlVoid *hlItemGetData(const HLDirectoryItem *pItem);

__attribute__ ((visibility("default"))) hlUInt hlItemGetPackage(const HLDirectoryItem *pItem);
__attribute__ ((visibility("default"))) HLDirectoryItem *hlItemGetParent(HLDirectoryItem *pItem);

__attribute__ ((visibility("default"))) hlBool hlItemGetSize(const HLDirectoryItem *pItem, hlUInt *pSize);
__attribute__ ((visibility("default"))) hlBool hlItemGetSizeEx(const HLDirectoryItem *pItem, hlULongLong *pSize);
__attribute__ ((visibility("default"))) hlBool hlItemGetSizeOnDisk(const HLDirectoryItem *pItem, hlUInt *pSize);
__attribute__ ((visibility("default"))) hlBool hlItemGetSizeOnDiskEx(const HLDirectoryItem *pItem, hlULongLong *pSize);

__attribute__ ((visibility("default"))) hlVoid hlItemGetPath(const HLDirectoryItem *pItem, hlChar *lpPath, hlUInt uiPathSize);
__attribute__ ((visibility("default"))) hlBool hlItemExtract(HLDirectoryItem *pItem, const hlChar *lpPath);





__attribute__ ((visibility("default"))) hlUInt hlFolderGetCount(const HLDirectoryItem *pItem);

__attribute__ ((visibility("default"))) HLDirectoryItem *hlFolderGetItem(HLDirectoryItem *pItem, hlUInt uiIndex);
__attribute__ ((visibility("default"))) HLDirectoryItem *hlFolderGetItemByName(HLDirectoryItem *pItem, const hlChar *lpName, HLFindType eFind);
__attribute__ ((visibility("default"))) HLDirectoryItem *hlFolderGetItemByPath(HLDirectoryItem *pItem, const hlChar *lpPath, HLFindType eFind);

__attribute__ ((visibility("default"))) hlVoid hlFolderSort(HLDirectoryItem *pItem, HLSortField eField, HLSortOrder eOrder, hlBool bRecurse);

__attribute__ ((visibility("default"))) HLDirectoryItem *hlFolderFindFirst(HLDirectoryItem *pFolder, const hlChar *lpSearch, HLFindType eFind);
__attribute__ ((visibility("default"))) HLDirectoryItem *hlFolderFindNext(HLDirectoryItem *pFolder, HLDirectoryItem *pItem, const hlChar *lpSearch, HLFindType eFind);

__attribute__ ((visibility("default"))) hlUInt hlFolderGetSize(const HLDirectoryItem *pItem, hlBool bRecurse);
__attribute__ ((visibility("default"))) hlULongLong hlFolderGetSizeEx(const HLDirectoryItem *pItem, hlBool bRecurse);
__attribute__ ((visibility("default"))) hlUInt hlFolderGetSizeOnDisk(const HLDirectoryItem *pItem, hlBool bRecurse);
__attribute__ ((visibility("default"))) hlULongLong hlFolderGetSizeOnDiskEx(const HLDirectoryItem *pItem, hlBool bRecurse);
__attribute__ ((visibility("default"))) hlUInt hlFolderGetFolderCount(const HLDirectoryItem *pItem, hlBool bRecurse);
__attribute__ ((visibility("default"))) hlUInt hlFolderGetFileCount(const HLDirectoryItem *pItem, hlBool bRecurse);





__attribute__ ((visibility("default"))) hlUInt hlFileGetExtractable(const HLDirectoryItem *pItem);
__attribute__ ((visibility("default"))) HLValidation hlFileGetValidation(const HLDirectoryItem *pItem);
__attribute__ ((visibility("default"))) hlUInt hlFileGetSize(const HLDirectoryItem *pItem);
__attribute__ ((visibility("default"))) hlUInt hlFileGetSizeOnDisk(const HLDirectoryItem *pItem);

__attribute__ ((visibility("default"))) hlBool hlFileCreateStream(HLDirectoryItem *pItem, HLStream **pStream);
__attribute__ ((visibility("default"))) hlVoid hlFileReleaseStream(HLDirectoryItem *pItem, HLStream *pStream);





__attribute__ ((visibility("default"))) HLStreamType hlStreamGetType(const HLStream *pStream);

__attribute__ ((visibility("default"))) hlBool hlStreamGetOpened(const HLStream *pStream);
__attribute__ ((visibility("default"))) hlUInt hlStreamGetMode(const HLStream *pStream);

__attribute__ ((visibility("default"))) hlBool hlStreamOpen(HLStream *pStream, hlUInt uiMode);
__attribute__ ((visibility("default"))) hlVoid hlStreamClose(HLStream *pStream);

__attribute__ ((visibility("default"))) hlUInt hlStreamGetStreamSize(const HLStream *pStream);
__attribute__ ((visibility("default"))) hlULongLong hlStreamGetStreamSizeEx(const HLStream *pStream);
__attribute__ ((visibility("default"))) hlUInt hlStreamGetStreamPointer(const HLStream *pStream);
__attribute__ ((visibility("default"))) hlULongLong hlStreamGetStreamPointerEx(const HLStream *pStream);

__attribute__ ((visibility("default"))) hlUInt hlStreamSeek(HLStream *pStream, hlLongLong iOffset, HLSeekMode eSeekMode);
__attribute__ ((visibility("default"))) hlULongLong hlStreamSeekEx(HLStream *pStream, hlLongLong iOffset, HLSeekMode eSeekMode);

__attribute__ ((visibility("default"))) hlBool hlStreamReadChar(HLStream *pStream, hlChar *pChar);
__attribute__ ((visibility("default"))) hlUInt hlStreamRead(HLStream *pStream, hlVoid *lpData, hlUInt uiBytes);

__attribute__ ((visibility("default"))) hlBool hlStreamWriteChar(HLStream *pStream, hlChar iChar);
__attribute__ ((visibility("default"))) hlUInt hlStreamWrite(HLStream *pStream, const hlVoid *lpData, hlUInt uiBytes);





__attribute__ ((visibility("default"))) hlBool hlBindPackage(hlUInt uiPackage);

__attribute__ ((visibility("default"))) HLPackageType hlGetPackageTypeFromName(const hlChar *lpName);
__attribute__ ((visibility("default"))) HLPackageType hlGetPackageTypeFromMemory(const hlVoid *lpBuffer, hlUInt uiBufferSize);
__attribute__ ((visibility("default"))) HLPackageType hlGetPackageTypeFromStream(HLStream *pStream);
__attribute__ ((visibility("default"))) hlBool hlCreatePackage(HLPackageType ePackageType, hlUInt *uiPackage);
__attribute__ ((visibility("default"))) hlVoid hlDeletePackage(hlUInt uiPackage);

__attribute__ ((visibility("default"))) HLPackageType hlPackageGetType();
__attribute__ ((visibility("default"))) const hlChar *hlPackageGetExtension();
__attribute__ ((visibility("default"))) const hlChar *hlPackageGetDescription();

__attribute__ ((visibility("default"))) hlBool hlPackageGetOpened();

__attribute__ ((visibility("default"))) hlBool hlPackageOpenFile(const hlChar *lpFileName, hlUInt uiMode);
__attribute__ ((visibility("default"))) hlBool hlPackageOpenMemory(hlVoid *lpData, hlUInt uiBufferSize, hlUInt uiMode);
__attribute__ ((visibility("default"))) hlBool hlPackageOpenProc(hlVoid *pUserData, hlUInt uiMode);
__attribute__ ((visibility("default"))) hlBool hlPackageOpenStream(HLStream *pStream, hlUInt uiMode);
__attribute__ ((visibility("default"))) hlVoid hlPackageClose();

__attribute__ ((visibility("default"))) hlBool hlPackageDefragment();

__attribute__ ((visibility("default"))) HLDirectoryItem *hlPackageGetRoot();

__attribute__ ((visibility("default"))) hlUInt hlPackageGetAttributeCount();
__attribute__ ((visibility("default"))) const hlChar *hlPackageGetAttributeName(HLPackageAttribute eAttribute);
__attribute__ ((visibility("default"))) hlBool hlPackageGetAttribute(HLPackageAttribute eAttribute, HLAttribute *pAttribute);

__attribute__ ((visibility("default"))) hlUInt hlPackageGetItemAttributeCount();
__attribute__ ((visibility("default"))) const hlChar *hlPackageGetItemAttributeName(HLPackageAttribute eAttribute);
__attribute__ ((visibility("default"))) hlBool hlPackageGetItemAttribute(const HLDirectoryItem *pItem, HLPackageAttribute eAttribute, HLAttribute *pAttribute);

__attribute__ ((visibility("default"))) hlBool hlPackageGetExtractable(const HLDirectoryItem *pFile, hlBool *pExtractable);
__attribute__ ((visibility("default"))) hlBool hlPackageGetFileSize(const HLDirectoryItem *pFile, hlUInt *pSize);
__attribute__ ((visibility("default"))) hlBool hlPackageGetFileSizeOnDisk(const HLDirectoryItem *pFile, hlUInt *pSize);
__attribute__ ((visibility("default"))) hlBool hlPackageCreateStream(const HLDirectoryItem *pFile, HLStream **pStream);
__attribute__ ((visibility("default"))) hlVoid hlPackageReleaseStream(HLStream *pStream);

__attribute__ ((visibility("default"))) const hlChar *hlNCFFileGetRootPath();
__attribute__ ((visibility("default"))) hlVoid hlNCFFileSetRootPath(const hlChar *lpRootPath);

__attribute__ ((visibility("default"))) hlBool hlWADFileGetImageSizePaletted(const HLDirectoryItem *pFile, hlUInt *uiPaletteDataSize, hlUInt *uiPixelDataSize);
__attribute__ ((visibility("default"))) hlBool hlWADFileGetImageDataPaletted(const HLDirectoryItem *pFile, hlUInt *uiWidth, hlUInt *uiHeight, hlByte **lpPaletteData, hlByte **lpPixelData);
__attribute__ ((visibility("default"))) hlBool hlWADFileGetImageSize(const HLDirectoryItem *pFile, hlUInt *uiPixelDataSize);
__attribute__ ((visibility("default"))) hlBool hlWADFileGetImageData(const HLDirectoryItem *pFile, hlUInt *uiWidth, hlUInt *uiHeight, hlByte **lpPixelData);

