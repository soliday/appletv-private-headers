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
@property(readonly, assign) unsigned length;	// G=0x334b52fd; 
@property(copy) NSString *mediaText;	// G=0x334b58d1; S=0x334b5789; 
- (void)appendMedium:(id)medium;	// 0x334b53a9
- (void)dealloc;	// 0x334b5329
- (void)deleteMedium:(id)medium;	// 0x334b54f1
- (void)finalize;	// 0x334b5a1d
- (id)item:(unsigned)item;	// 0x334b5639
// declared property getter: - (unsigned)length;	// 0x334b52fd
// declared property getter: - (id)mediaText;	// 0x334b58d1
// declared property setter: - (void)setMediaText:(id)text;	// 0x334b5789
@end

