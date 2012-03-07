/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSData.h> // Unknown library

@class NSString, NSDate;

@interface NSPageData : NSData {
@private
	NSData *data;	// 4 = 0x4
	NSDate *_originalFileModDate;	// 8 = 0x8
	NSString *_originalFilePath;	// 12 = 0xc
}
@property(readonly, retain) NSData *data;	// G=0x3374495d; converted property
+ (int)_umask;	// 0x33744065
+ (void)initialize;	// 0x3374401d
- (id)init;	// 0x337440b5
- (id)initFromSerializerStream:(id)serializerStream length:(unsigned)length;	// 0x3374485d
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x3374414d
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x337440fd
- (id)initWithContentsOfFile:(id)file;	// 0x3374424d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x33744301
- (id)initWithContentsOfMappedFile:(id)mappedFile withFileAttributes:(id)fileAttributes;	// 0x33744315
- (id)initWithData:(id)data;	// 0x3374419d
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x33744931
- (id)_mappedFile;	// 0x337443f5
- (void)_setOriginalFileInfoFromFileAttributes:(id)fileAttributes;	// 0x337441e9
- (const void *)bytes;	// 0x33744095
// converted property getter: - (id)data;	// 0x3374495d
- (void)dealloc;	// 0x33744405
- (id)deserializer;	// 0x337448ad
- (unsigned)length;	// 0x33744075
- (unsigned)writeFd:(int)fd;	// 0x33744995
- (unsigned)writeFile:(id)file;	// 0x337449f1
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x33744479
@end
