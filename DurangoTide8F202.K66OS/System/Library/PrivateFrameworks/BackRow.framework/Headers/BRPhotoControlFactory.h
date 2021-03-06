/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <NSObject.h> // Unknown library

@class NSDateFormatter;
@protocol BRSelectionHandler;

@interface BRPhotoControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
	NSDateFormatter *_formatter;	// 8 = 0x8
	BOOL _useMinimumImages;	// 12 = 0xc
	BOOL _useLocalProviders;	// 13 = 0xd
}
@property(readonly, retain) NSDateFormatter *formatter;	// G=0x3292eced; converted property
@property(retain) id selectionHandler;	// G=0x3292e629; S=0x3292ed85; converted property
+ (id)mainMenuFactory;	// 0x3292eea1
+ (id)standardFactory;	// 0x3292eee1
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x3292ee19
- (id)_cyclerForData:(id)data;	// 0x3292e88d
- (id)_cyclerItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3292f041
- (void)_decorateControlWithPlayIcon:(id)playIcon forMediaObject:(id)mediaObject;	// 0x3292f7a9
- (id)_gridItemForData:(id)data;	// 0x3292e9f9
- (id)_menuItemForData:(id)data;	// 0x3292eb9d
- (id)_previewControlForData:(id)data;	// 0x3292e7c1
- (id)_shelfItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3292e659
- (id)_subtitleForCollection:(id)collection;	// 0x3292fa55
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3292ef21
- (void)dealloc;	// 0x3292edbd
// converted property getter: - (id)formatter;	// 0x3292eced
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x3292f579
// converted property getter: - (id)selectionHandler;	// 0x3292e629
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x3292ed85
- (void)setUseMinimumImages:(BOOL)images;	// 0x3292e639
- (BOOL)useMinumumImages;	// 0x3292e649
@end

