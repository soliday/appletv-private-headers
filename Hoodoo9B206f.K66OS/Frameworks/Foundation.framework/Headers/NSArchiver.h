/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"


@interface NSArchiver : NSCoder {
@private
	void *mdata;	// 4 = 0x4
	void *pointerTable;	// 8 = 0x8
	void *stringTable;	// 12 = 0xc
	void *ids;	// 16 = 0x10
	void *map;	// 20 = 0x14
	void *replacementTable;	// 24 = 0x18
	void *reserved;	// 28 = 0x1c
}
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x31d432e1
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x31d173dd
+ (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x31d42d9d
+ (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x31d1738d
+ (void)initialize;	// 0x31d1735d
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x31d175c5
- (id)archiverData;	// 0x31d42c7d
- (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x31d43371
- (id)data;	// 0x31d42c8d
- (void)dealloc;	// 0x31d1882d
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x31d42e6d
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x31d43109
- (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x31d4330d
- (void)encodeConditionalObject:(id)object;	// 0x31d43239
- (void)encodeDataObject:(id)object;	// 0x31d4316d
- (void)encodeObject:(id)object;	// 0x31d17899
- (void)encodeRootObject:(id)object;	// 0x31d177b5
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x31d17e59
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x31d42e11
- (void)finalize;	// 0x31d42c9d
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x31d42d39
- (int)versionForClassName:(id)className;	// 0x31d42de9
@end

