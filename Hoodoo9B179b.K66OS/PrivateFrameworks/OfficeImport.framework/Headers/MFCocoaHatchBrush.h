/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFCocoaBrush.h"

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface MFCocoaHatchBrush : MFCocoaBrush {
@private
	NSColorStub *m_colour;	// 4 = 0x4
	int m_style;	// 8 = 0x8
}
+ (id)hatchBrushWithColour:(id)colour :(int)arg2;	// 0x3294308d
- (id)initWithColour:(id)colour :(int)arg2;	// 0x329430cd
- (void)dealloc;	// 0x32943139
- (void)fillPath:(id)path :(id)arg2;	// 0x32943135
@end

