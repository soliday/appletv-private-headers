/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "OADClient.h"

@class CHDAnchor;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject <OADClient> {
@private
	CHDAnchor *mAnchor;	// 4 = 0x4
}
@property(retain) id anchor;	// G=0x32d0dbfd; S=0x32cbc6b5; converted property
// converted property getter: - (id)anchor;	// 0x32d0dbfd
- (CGRect)bounds;	// 0x32d0dc11
- (void)dealloc;	// 0x32cbcdd9
- (BOOL)hasBounds;	// 0x32d0dc0d
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x32cbc6b5
@end

