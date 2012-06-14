/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface CPTracing : NSObject {
@private
	NSString *mFilename;	// 4 = 0x4
}
- (id)initWithFilename:(id)filename;	// 0x313b2f31
- (void)dealloc;	// 0x313b2f89
- (void)updateOpstat:(long *)opstat isStarting:(bool)starting;	// 0x313b2d2d
- (void)writeHeader;	// 0x313b2d35
- (void)writeOpstat:(long *)opstat tracePoint:(long)point filter:(int)filter;	// 0x313b2d31
@end

