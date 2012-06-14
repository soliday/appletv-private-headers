/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCDReader.h"
#import <NSObject.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface OCBReader : NSObject <OCDReader> {
@private
	OcBinaryReader *mBinaryReader;	// 4 = 0x4
	FILE *mFile;	// 8 = 0x8
	NSData *mData;	// 12 = 0xc
}
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3463d5a9
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3463d5a5
+ (void)setReadAdvisoryOnFile:(FILE *)file;	// 0x3441af4d
- (id)initWithBinaryReader:(OcBinaryReader *)binaryReader;	// 0x3441e9cd
- (OcBinaryReader *)binaryReader;	// 0x3463d595
- (void)dealloc;	// 0x344035d1
- (bool)isBinaryReader;	// 0x3463d591
- (void)setData:(id)data;	// 0x3463d5ad
- (void)setFile:(FILE *)file;	// 0x3444aeb5
@end

