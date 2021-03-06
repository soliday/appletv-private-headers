/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface VMUClassInfo : NSObject <NSCoding> {
@private
	id _reader;	// 4 = 0x4
	unsigned long long _remoteIsa;	// 8 = 0x8
	unsigned _remotePointerSize;	// 16 = 0x10
	unsigned _ivarCount;	// 20 = 0x14
	unsigned _superclassOffset;	// 24 = 0x18
	unsigned _instanceSize;	// 28 = 0x1c
	unsigned _ro_flags;	// 32 = 0x20
	unsigned _rw_flags;	// 36 = 0x24
	objc_ivar **_localIvarList;	// 40 = 0x28
	int *_ivarSizes;	// 44 = 0x2c
	int _remoteType;	// 48 = 0x30
	NSString *_remoteClassName;	// 52 = 0x34
	NSString *_remoteBinaryName;	// 56 = 0x38
	VMUClassInfo *_superclassLayout;	// 60 = 0x3c
	char *_weakLayout;	// 64 = 0x40
	char *_strongLayout;	// 68 = 0x44
	BOOL *_weakMap;	// 72 = 0x48
	BOOL *_strongMap;	// 76 = 0x4c
}
@property(readonly, assign) NSString *binaryName;	// G=0x32cccfcd; @synthesize=_remoteBinaryName
@property(readonly, assign) NSString *className;	// G=0x32ccd0b9; @synthesize=_remoteClassName
@property(readonly, assign) NSString *fullIvarDescription;	// G=0x32ccd585; 
@property(readonly, assign) BOOL hasCppConstructorOrDestructor;	// G=0x32ccd0a5; 
@property(readonly, assign) int infoType;	// G=0x32ccd045; 
@property(readonly, assign) unsigned instanceSize;	// G=0x32ccd0c9; @synthesize=_instanceSize
@property(readonly, assign) BOOL isARR;	// G=0x32ccd055; 
@property(readonly, assign) BOOL isMetaClass;	// G=0x32ccd07d; 
@property(readonly, assign) BOOL isRealized;	// G=0x32ccd069; 
@property(readonly, assign) BOOL isRootClass;	// G=0x32ccd091; 
@property(readonly, assign) unsigned long long remoteIsa;	// G=0x32ccd441; @synthesize=_remoteIsa
@property(readonly, assign) NSString *shortIvarDescription;	// G=0x32ccd505; 
@property(readonly, assign) NSString *typeName;	// G=0x32cccfed; 
+ (id)classInfoWithClassName:(id)className binaryName:(id)name type:(int)type;	// 0x32ccd3b9
+ (id)descriptionForTypeEncoding:(const char *)typeEncoding ivarName:(const char *)name;	// 0x32ccd399
+ (void)initialize;	// 0x32ccd401
- (id)initWithClass:(unsigned long long)aClass infoMap:(id)map symbolicator:(CSTypeRef)symbolicator type:(int)type memoryReader:(id)reader;	// 0x32ccd1a9
- (id)initWithClassName:(id)className binaryName:(id)name type:(int)type;	// 0x32ccea21
- (id)initWithCoder:(id)coder;	// 0x32ccdcd9
- (id)initWithIsaPointer:(unsigned)isaPointer symbolicator:(CSTypeRef)symbolicator;	// 0x32cce945
- (objc_ivar *)_copyRemoteIvarAt:(unsigned long long)at;	// 0x32cced15
- (const char *)_copyRemoteLayout:(unsigned long long)layout;	// 0x32ccd199
- (const char *)_copyRemoteStringAt:(unsigned long long)at;	// 0x32ccd0d9
- (id)_initWithClass:(unsigned long long)aClass doLayouts:(BOOL)layouts infoMap:(id)map symbolicator:(CSTypeRef)symbolicator type:(int)type memoryReader:(id)reader;	// 0x32cce32d
- (id)_ivarDescription:(unsigned)description withSpacing:(unsigned)spacing;	// 0x32ccdc15
- (void)_logDescriptionWithSuperclasses:(BOOL)superclasses indentation:(int)indentation toLogger:(id)logger;	// 0x32ccd98d
- (void)_parseIvarsAndLayouts;	// 0x32cceb29
- (BOOL *)_processARRLayout:(const char *)layout;	// 0x32ccec3d
- (int)_readRemoteIntAt:(unsigned long long)at;	// 0x32cccf4d
- (unsigned long long)_readRemotePointerAt:(unsigned long long)at;	// 0x32cccf7d
- (void)_scanFieldsToOffset:(unsigned)offset withBlock:(id)block;	// 0x32ccd7b1
- (void)_setClassNameWithAddress:(unsigned long long)address;	// 0x32cceac5
// declared property getter: - (id)binaryName;	// 0x32cccfcd
// declared property getter: - (id)className;	// 0x32ccd0b9
- (void)dealloc;	// 0x32cce179
- (id)debugDescription;	// 0x32ccd4f5
- (id)description;	// 0x32ccd475
- (void)encodeWithCoder:(id)coder;	// 0x32ccdf6d
- (void)enumerateIvarsWithBlock:(id)block;	// 0x32ccd611
// declared property getter: - (id)fullIvarDescription;	// 0x32ccd585
// declared property getter: - (BOOL)hasCppConstructorOrDestructor;	// 0x32ccd0a5
- (unsigned)hash;	// 0x32ccd1e9
// declared property getter: - (int)infoType;	// 0x32ccd045
// declared property getter: - (unsigned)instanceSize;	// 0x32ccd0c9
// declared property getter: - (BOOL)isARR;	// 0x32ccd055
- (BOOL)isEqual:(id)equal;	// 0x32ccd221
// declared property getter: - (BOOL)isMetaClass;	// 0x32ccd07d
// declared property getter: - (BOOL)isRealized;	// 0x32ccd069
// declared property getter: - (BOOL)isRootClass;	// 0x32ccd091
// declared property getter: - (unsigned long long)remoteIsa;	// 0x32ccd441
- (void)scanObject:(unsigned long long)object ofSize:(unsigned)size withBlock:(id)block;	// 0x32ccd725
- (void)setMemoryReader:(id)reader;	// 0x32ccd6ed
// declared property getter: - (id)shortIvarDescription;	// 0x32ccd505
- (id)type;	// 0x32ccd601
// declared property getter: - (id)typeName;	// 0x32cccfed
@end

