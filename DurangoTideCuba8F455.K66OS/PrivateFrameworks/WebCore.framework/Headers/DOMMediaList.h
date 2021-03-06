/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMMediaList : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x31852239; 
@property(copy) NSString *mediaText;	// G=0x31852799; S=0x31852665; 
- (void)appendMedium:(id)medium;	// 0x318522c9
- (void)dealloc;	// 0x3185224d
- (void)deleteMedium:(id)medium;	// 0x318523fd
- (void)finalize;	// 0x318528cd
- (id)item:(unsigned)item;	// 0x31852531
// declared property getter: - (unsigned)length;	// 0x31852239
// declared property getter: - (id)mediaText;	// 0x31852799
// declared property setter: - (void)setMediaText:(id)text;	// 0x31852665
@end

