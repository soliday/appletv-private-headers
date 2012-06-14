/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMCSSPrimitiveValue;

__attribute__((visibility("hidden")))
@interface DOMRGBColor : DOMObject {
}
@property(readonly, retain) DOMCSSPrimitiveValue *alpha;	// G=0x359380a1; 
@property(readonly, retain) DOMCSSPrimitiveValue *blue;	// G=0x359381e9; 
@property(readonly, retain) DOMCSSPrimitiveValue *green;	// G=0x35938331; 
@property(readonly, retain) DOMCSSPrimitiveValue *red;	// G=0x35938479; 
// declared property getter: - (id)alpha;	// 0x359380a1
// declared property getter: - (id)blue;	// 0x359381e9
- (CGColorRef)color;	// 0x35937fe1
- (void)dealloc;	// 0x35937f6d
- (void)finalize;	// 0x359385c1
// declared property getter: - (id)green;	// 0x35938331
// declared property getter: - (id)red;	// 0x35938479
@end

