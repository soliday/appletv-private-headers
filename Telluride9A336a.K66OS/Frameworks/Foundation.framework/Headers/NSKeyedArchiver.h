/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoder.h"


@interface NSKeyedArchiver : NSCoder {
@private
	void *_stream;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	id _containers;	// 16 = 0x10
	id _objects;	// 20 = 0x14
	id _objRefMap;	// 24 = 0x18
	id _replacementMap;	// 28 = 0x1c
	id _classNameMap;	// 32 = 0x20
	id _conditionals;	// 36 = 0x24
	id _classes;	// 40 = 0x28
	unsigned _genericKey;	// 44 = 0x2c
	void *_cache;	// 48 = 0x30
	unsigned _cacheSize;	// 52 = 0x34
	unsigned _estimatedCount;	// 56 = 0x38
	void *_reserved2;	// 60 = 0x3c
	id _visited;	// 64 = 0x40
	void *_reserved0;	// 68 = 0x44
}
@property(assign) id delegate;	// G=0x336ce07d; S=0x336ce06d; converted property
@property(assign) unsigned outputFormat;	// G=0x33663615; S=0x336ce08d; converted property
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x336cde05
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x33662339
+ (id)classNameForClass:(Class)aClass;	// 0x33663255
+ (void)initialize;	// 0x3367c5a1
+ (void)setClassName:(id)name forClass:(Class)aClass;	// 0x3367c635
- (id)init;	// 0x336cddad
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x336623f9
- (id)_blobForCurrentObject;	// 0x336cdd85
- (void)_encodeArrayOfObjects:(id)objects forKey:(id)key;	// 0x3367c935
- (void)_encodePropertyList:(id)list forKey:(id)key;	// 0x33686f7d
- (id)_initWithOutput:(id)output;	// 0x33662409
- (void)_setBlobForCurrentObject:(id)currentObject;	// 0x336cdd29
- (BOOL)allowsKeyedCoding;	// 0x336632e1
- (id)classNameForClass:(Class)aClass;	// 0x33663231
- (void)dealloc;	// 0x33663acd
// converted property getter: - (id)delegate;	// 0x336ce07d
- (id)description;	// 0x336ce041
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x336cebad
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x3367cb81
- (void)encodeBycopyObject:(id)object;	// 0x336ce579
- (void)encodeByrefObject:(id)object;	// 0x336ce589
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x336ce5b9
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x336ce295
- (void)encodeConditionalObject:(id)object;	// 0x336ce4d5
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x336ce0f5
- (void)encodeDataObject:(id)object;	// 0x336ce5a9
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x33686ce5
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x336ce1a5
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x3367cf81
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x33693b41
- (void)encodeInt:(int)int forKey:(id)key;	// 0x33686b79
- (void)encodeObject:(id)object;	// 0x336ce3dd
- (void)encodeObject:(id)object forKey:(id)key;	// 0x33662641
- (void)encodeRootObject:(id)object;	// 0x336ce599
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x336ce7b1
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x336ce65d
- (void)finalize;	// 0x336cdf21
- (void)finishEncoding;	// 0x3366339d
// converted property getter: - (unsigned)outputFormat;	// 0x33663615
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x33662fe5
- (void)setClassName:(id)name forClass:(Class)aClass;	// 0x33694105
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x336ce06d
// converted property setter: - (void)setOutputFormat:(unsigned)format;	// 0x336ce08d
- (unsigned)systemVersion;	// 0x336cedb1
- (int)versionForClassName:(id)className;	// 0x336ced89
@end

