/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class BRDividerControl;

@interface BRDividerProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x3307881d; S=0x330787ed; converted property
+ (id)providerWithProvider:(id)provider;	// 0x33078699
- (id)initWithProvider:(id)provider;	// 0x33078505
- (void)_providerDataSetChanged:(id)changed;	// 0x33078b71
- (void)_providerItemsModified:(id)modified;	// 0x33078afd
- (id)_shiftRangesDown:(id)down;	// 0x33078a1d
- (BOOL)_shouldShowDivider;	// 0x330789cd
- (void)_updateTopDividerControl;	// 0x3307892d
- (id)accessibilityLabel;	// 0x33078bd9
- (void)addDividerWithLabel:(id)label;	// 0x330786f5
- (void)addDividerWithLabel:(id)label andOrientation:(int)orientation;	// 0x33078709
- (id)controlFactory;	// 0x3307884d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33078bf9
- (id)dataAtIndex:(long)index;	// 0x33078891
- (long)dataCount;	// 0x33078851
- (void)dealloc;	// 0x33078609
- (id)divider;	// 0x3307883d
// converted property getter: - (BOOL)dividerHidden;	// 0x3307881d
- (BOOL)dividerVisible;	// 0x3307882d
- (id)hashForDataAtIndex:(long)index;	// 0x330788e5
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x33078c55
- (id)provider;	// 0x330786e5
- (void)removeDivider;	// 0x330787ad
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x330787ed
@end
