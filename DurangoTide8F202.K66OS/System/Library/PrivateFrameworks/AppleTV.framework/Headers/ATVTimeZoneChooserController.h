/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchController.h"
#import "BRProvider.h"
#import "BRSelectionHandler.h"
#import "BRControlFactory.h"

@class NSArray;

@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler> {
@private
	NSArray *_matchedCities;	// 132 = 0x84
}
+ (void)initialize;	// 0x33727c3d
- (id)init;	// 0x33727dbd
- (id)controlFactory;	// 0x337279a9
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33727a85
- (id)dataAtIndex:(long)index;	// 0x33727bc5
- (long)dataCount;	// 0x33727be5
- (void)dealloc;	// 0x33727d75
- (BOOL)handleSelectionForControl:(id)control;	// 0x337279ad
- (id)hashForDataAtIndex:(long)index;	// 0x33727b95
- (void)setMatchedCities:(id)cities;	// 0x33727c05
- (void)wasPopped;	// 0x33727cc1
- (void)wasPushed;	// 0x33727d0d
@end

