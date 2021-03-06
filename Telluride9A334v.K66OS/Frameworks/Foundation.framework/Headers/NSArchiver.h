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
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x306502f1
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x306243ed
+ (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x3064fdad
+ (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x3062439d
+ (void)initialize;	// 0x3062436d
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x306245d5
- (id)archiverData;	// 0x3064fc8d
- (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x30650381
- (id)data;	// 0x3064fc9d
- (void)dealloc;	// 0x3062583d
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x3064fe7d
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x30650119
- (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x3065031d
- (void)encodeConditionalObject:(id)object;	// 0x30650249
- (void)encodeDataObject:(id)object;	// 0x3065017d
- (void)encodeObject:(id)object;	// 0x306248a9
- (void)encodeRootObject:(id)object;	// 0x306247c5
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x30624e69
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x3064fe21
- (void)finalize;	// 0x3064fcad
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x3064fd49
- (int)versionForClassName:(id)className;	// 0x3064fdf9
@end

