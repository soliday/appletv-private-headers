/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"

@class NSData, NSMutableString;

@interface CPArchive : NSObject <CPDisposable> {
	CFArrayRef selections;	// 4 = 0x4
	CFArrayRef imageNodes;	// 8 = 0x8
	NSMutableString *plainText;	// 12 = 0xc
	NSMutableString *htmlString;	// 16 = 0x10
	NSMutableString *htmlStringNoImages;	// 20 = 0x14
	NSData *webArchiveData;	// 24 = 0x18
}
@property(readonly, retain) NSMutableString *plainText;	// G=0x33a44979; converted property
@property(readonly, retain) NSData *webArchiveData;	// G=0x33a44c81; converted property
- (id)init;	// 0x33a4475d
- (void)addSelection:(CGPDFSelectionRef)selection;	// 0x33a448d9
- (void)dealloc;	// 0x33a4483d
- (void)dispose;	// 0x33a447c1
- (void)finalize;	// 0x33a447fd
- (id)html;	// 0x33a44a81
// converted property getter: - (id)plainText;	// 0x33a44979
// converted property getter: - (id)webArchiveData;	// 0x33a44c81
@end
