/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADClient.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class CHDAnchor;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject <OADClient> {
@private
	CHDAnchor *mAnchor;	// 4 = 0x4
}
@property(retain) id anchor;	// G=0x31349e19; S=0x312df7f9; converted property
// converted property getter: - (id)anchor;	// 0x31349e19
- (CGRect)bounds;	// 0x31349e2d
- (void)dealloc;	// 0x312dfa7d
- (BOOL)hasBounds;	// 0x31349e29
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x312df7f9
@end

