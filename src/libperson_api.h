#ifndef KONAN_LIBPERSON_H
#define KONAN_LIBPERSON_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libperson_KBoolean;
#else
typedef _Bool           libperson_KBoolean;
#endif
typedef unsigned short     libperson_KChar;
typedef signed char        libperson_KByte;
typedef short              libperson_KShort;
typedef int                libperson_KInt;
typedef long long          libperson_KLong;
typedef unsigned char      libperson_KUByte;
typedef unsigned short     libperson_KUShort;
typedef unsigned int       libperson_KUInt;
typedef unsigned long long libperson_KULong;
typedef float              libperson_KFloat;
typedef double             libperson_KDouble;
typedef void*              libperson_KNativePtr;
struct libperson_KType;
typedef struct libperson_KType libperson_KType;

typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Byte;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Short;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Int;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Long;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Float;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Double;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Char;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Boolean;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_kotlin_Unit;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_Sample;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_Platform;
typedef struct {
  libperson_KNativePtr pinned;
} libperson_kref_Person;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libperson_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libperson_KBoolean (*IsInstance)(libperson_KNativePtr ref, const libperson_KType* type);
  libperson_kref_kotlin_Byte (*createNullableByte)(libperson_KByte);
  libperson_kref_kotlin_Short (*createNullableShort)(libperson_KShort);
  libperson_kref_kotlin_Int (*createNullableInt)(libperson_KInt);
  libperson_kref_kotlin_Long (*createNullableLong)(libperson_KLong);
  libperson_kref_kotlin_Float (*createNullableFloat)(libperson_KFloat);
  libperson_kref_kotlin_Double (*createNullableDouble)(libperson_KDouble);
  libperson_kref_kotlin_Char (*createNullableChar)(libperson_KChar);
  libperson_kref_kotlin_Boolean (*createNullableBoolean)(libperson_KBoolean);
  libperson_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      const char* (*hello)();
      void (*main)();
      struct {
        libperson_KType* (*_type)(void);
        libperson_kref_Sample (*Sample)();
        libperson_KInt (*checkMe)(libperson_kref_Sample thiz);
      } Sample;
      struct {
        libperson_KType* (*_type)(void);
        libperson_kref_Platform (*_instance)();
        const char* (*get_name)(libperson_kref_Platform thiz);
      } Platform;
      struct {
        libperson_KType* (*_type)(void);
        libperson_kref_Person (*Person)(const char* firstname, const char* lastname);
        const char* (*get_firstname)(libperson_kref_Person thiz);
        const char* (*get_lastname)(libperson_kref_Person thiz);
      } Person;
    } root;
  } kotlin;
} libperson_ExportedSymbols;
extern libperson_ExportedSymbols* libperson_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBPERSON_H */
