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
- (id)initWithPath:(id)path indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path4 previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper generator:(Class)generator;	// 0x32c05d79
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper generator:(Class)generator;	// 0x32c05a39
- (Class)generator;	// 0x32c05149
- (BOOL)go;	// 0x32c05b85
- (void)pushInitialState;	// 0x32c05ca1
@end

