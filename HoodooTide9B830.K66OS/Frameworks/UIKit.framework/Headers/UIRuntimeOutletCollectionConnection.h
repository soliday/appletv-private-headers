/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {
@private
	NSString *runtimeCollectionClassName;	// 16 = 0x10
	BOOL addsContentToExistingCollection;	// 20 = 0x14
}
@property(assign) BOOL addsContentToExistingCollection;	// G=0x3036cc21; S=0x3036cc31; @synthesize
@property(copy) NSString *runtimeCollectionClassName;	// G=0x3036cbe9; S=0x3036cbfd; @synthesize
- (id)initWithCoder:(id)coder;	// 0x3036c699
// declared property getter: - (BOOL)addsContentToExistingCollection;	// 0x3036cc21
- (void)connect;	// 0x3036ca81
- (void)connectForSimulator;	// 0x3036ca91
- (void)dealloc;	// 0x3036c7bd
- (id)description;	// 0x3036cb55
- (void)encodeWithCoder:(id)coder;	// 0x3036c735
- (void)performConnect;	// 0x3036c809
// declared property getter: - (id)runtimeCollectionClassName;	// 0x3036cbe9
// declared property setter: - (void)setAddsContentToExistingCollection:(BOOL)existingCollection;	// 0x3036cc31
// declared property setter: - (void)setRuntimeCollectionClassName:(id)name;	// 0x3036cbfd
@end

