/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQPProcessor.h"


__attribute__((visibility("hidden")))
@interface GQPLSProcessor : GQPProcessor {
@private
	Class mGenerator;	// 48 = 0x30
}
- (id)initWithPath:(id)path indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path4 previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper generator:(Class)generator;	// 0x33ff7d7d
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper generator:(Class)generator;	// 0x33ff7a3d
- (Class)generator;	// 0x33ff710d
- (BOOL)go;	// 0x33ff7b89
- (void)pushInitialState;	// 0x33ff7ca5
@end

