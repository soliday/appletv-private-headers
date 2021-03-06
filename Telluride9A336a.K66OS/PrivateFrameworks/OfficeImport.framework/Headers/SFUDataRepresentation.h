/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUDataRepresentation : NSObject {
@private
	BOOL mHasHash;	// 4 = 0x4
	unsigned mHash;	// 8 = 0x8
}
- (id)bufferedInputStream;	// 0x34cffef1
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x34e5b9c1
- (CGDataProviderRef)cgDataProvider;	// 0x34e5be49
- (int)compare:(id)compare;	// 0x34e5c371
- (long long)dataLength;	// 0x34e5b89d
- (long long)encodedLength;	// 0x34e5b929
- (BOOL)hasSameLocationAs:(id)as;	// 0x34e5b899
- (unsigned)hash;	// 0x34e5bf1d
- (id)inputStream;	// 0x34e5b939
- (BOOL)isEncrypted;	// 0x34e5b895
- (BOOL)isEqual:(id)equal;	// 0x34e5c169
- (BOOL)isReadable;	// 0x34e5b891
- (unsigned long)readIntoData:(id)data;	// 0x34e5baf1
- (xmlDoc *)xmlDocument;	// 0x34d01bbd
- (xmlTextReader *)xmlReader;	// 0x34d0f35d
- (xmlTextReader *)xmlReaderForGzippedData;	// 0x34e5ba31
- (xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)inputStream;	// 0x34e5bcf9
@end

