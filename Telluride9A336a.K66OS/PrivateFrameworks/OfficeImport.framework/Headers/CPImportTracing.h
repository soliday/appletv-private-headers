/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CPTracing.h"


__attribute__((visibility("hidden")))
@interface CPImportTracing : CPTracing {
@private
	long mReadingOpstat;	// 8 = 0x8
	long mProcessorOpstat;	// 12 = 0xc
	long mImportingOpstat;	// 16 = 0x10
}
- (id)initWithFilename:(id)filename;	// 0x34e4cd39
- (void)dealloc;	// 0x34e4ce29
- (void)startImporting;	// 0x34e4cd89
- (void)startProcessors;	// 0x34e4cdc9
- (void)startReading;	// 0x34e4ce09
- (void)stopImporting;	// 0x34e4cd69
- (void)stopProcessors;	// 0x34e4cda9
- (void)stopReading;	// 0x34e4cde9
@end

