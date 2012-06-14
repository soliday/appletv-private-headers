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
@property(readonly, retain) NSData *data;	// G=0x31de794d; converted property
+ (int)_umask;	// 0x31de7055
+ (void)initialize;	// 0x31de700d
- (id)init;	// 0x31de70a5
- (id)initFromSerializerStream:(id)serializerStream length:(unsigned)length;	// 0x31de784d
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x31de713d
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x31de70ed
- (id)initWithContentsOfFile:(id)file;	// 0x31de723d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x31de72f1
- (id)initWithContentsOfMappedFile:(id)mappedFile withFileAttributes:(id)fileAttributes;	// 0x31de7305
- (id)initWithData:(id)data;	// 0x31de718d
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x31de7921
- (id)_mappedFile;	// 0x31de73e5
- (void)_setOriginalFileInfoFromFileAttributes:(id)fileAttributes;	// 0x31de71d9
- (const void *)bytes;	// 0x31de7085
// converted property getter: - (id)data;	// 0x31de794d
- (void)dealloc;	// 0x31de73f5
- (id)deserializer;	// 0x31de789d
- (unsigned)length;	// 0x31de7065
- (unsigned)writeFd:(int)fd;	// 0x31de7985
- (unsigned)writeFile:(id)file;	// 0x31de79e1
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x31de7469
@end

