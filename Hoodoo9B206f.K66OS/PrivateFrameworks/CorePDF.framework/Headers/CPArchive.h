/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"

@class NSMutableString, NSData;

@interface CPArchive : NSObject <CPDisposable> {
	CFArrayRef selections;	// 4 = 0x4
	CFArrayRef imageNodes;	// 8 = 0x8
	NSMutableString *plainText;	// 12 = 0xc
	NSMutableString *htmlString;	// 16 = 0x10
	NSMutableString *htmlStringNoImages;	// 20 = 0x14
	NSData *webArchiveData;	// 24 = 0x18
}
@property(readonly, retain) NSMutableString *plainText;	// G=0x3261cee9; converted property
@property(readonly, retain) NSData *webArchiveData;	// G=0x3261c865; converted property
- (id)init;	// 0x3261c801
- (void)addSelection:(CGPDFSelectionRef)selection;	// 0x3261d015
- (void)dealloc;	// 0x3261d0b1
- (void)dispose;	// 0x3261d189
- (void)finalize;	// 0x3261d149
- (id)html;	// 0x3261ccb1
// converted property getter: - (id)plainText;	// 0x3261cee9
// converted property getter: - (id)webArchiveData;	// 0x3261c865
@end

