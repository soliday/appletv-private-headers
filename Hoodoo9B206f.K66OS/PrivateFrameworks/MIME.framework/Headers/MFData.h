/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "MIME-Structs.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {
	NSData *_internal;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSData *_parent;	// 12 = 0xc
	BOOL _subdata;	// 16 = 0x10
}
+ (void)setDefaultMappingThresholdInBytes:(unsigned)bytes;	// 0x35e4ef29
- (id)init;	// 0x35e4ffe9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x35e4fd61
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x35e4fd3d
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x35e4fc99
- (id)initWithContentsOfFile:(id)file;	// 0x35e4f839
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x35e4f95d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x35e4faf1
- (id)initWithContentsOfURL:(id)url;	// 0x35e4fb89
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35e4fba9
- (id)initWithData:(id)data;	// 0x35e4f661
- (id)initWithImmutableData:(id)immutableData;	// 0x35e4f64d
- (id)_initWithData:(id)data maybeMutable:(BOOL)aMutable;	// 0x35e4f675
- (id)_initWithFile:(id)file;	// 0x35e4ff55
- (id)_initWithRange:(NSRange)range from:(id)from retainingParent:(BOOL)parent;	// 0x35e4f29d
- (const void *)bytes;	// 0x35e4f4b5
- (id)copyWithZone:(NSZone *)zone;	// 0x35e4f60d
- (id)data;	// 0x35e4f265
- (void)dealloc;	// 0x35e4f4f5
- (unsigned)length;	// 0x35e4f4d5
- (BOOL)mf_immutable;	// 0x35e4ef39
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35e4f5d5
- (id)subdataWithRange:(NSRange)range;	// 0x35e4f425
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x35e4f235
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x35e4f0fd
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x35e4f205
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35e4f06d
@end

