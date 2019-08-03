/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.9.5
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/almacen/nuevo/Desarrollo/crt-rgbx/build/sysback/systemback-1.8.402~ubuntu16.04.3/libsystemback/version
  0x0,0x0,0x0,0x13,
  0x31,
  0x2e,0x38,0x2e,0x34,0x30,0x32,0x5f,0x30,0x35,0x2e,0x31,0x36,0x2e,0x32,0x30,0x31,
  0x36,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // version
  0x0,0x7,
  0xc,0xc9,0xa0,0xbe,
  0x0,0x76,
  0x0,0x65,0x0,0x72,0x0,0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/version
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x6b,0xb8,0xa9,0x2f,0xcb,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_version)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_version)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_version)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_version)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_version)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_version)(); }
   } dummy;
}
