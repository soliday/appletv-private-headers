/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"

@class ESDObject, PBPresentationReaderState;

__attribute__((visibility("hidden")))
@interface PXVmlState : OAVState {
@private
	ESDObject *mLegacyTextGlobals;	// 28 = 0x1c
	PBPresentationReaderState *mLegacyPresentationState;	// 32 = 0x20
}
@property(retain) id legacyPresentationState;	// G=0x34d9891d; S=0x34d98971; converted property
@property(retain) id legacyTextGlobals;	// G=0x34d9890d; S=0x34d9892d; converted property
- (void)dealloc;	// 0x34d30309
// converted property getter: - (id)legacyPresentationState;	// 0x34d9891d
// converted property getter: - (id)legacyTextGlobals;	// 0x34d9890d
// converted property setter: - (void)setLegacyPresentationState:(id)state;	// 0x34d98971
// converted property setter: - (void)setLegacyTextGlobals:(id)globals;	// 0x34d9892d
@end

