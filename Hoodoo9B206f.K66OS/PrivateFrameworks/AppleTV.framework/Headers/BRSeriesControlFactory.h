/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@protocol BRSelectionHandler;

@interface BRSeriesControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	int _controlType;	// 4 = 0x4
	float _dividerHeight;	// 8 = 0x8
	BOOL _hidePartialPlayedImages;	// 12 = 0xc
	id<BRSelectionHandler> _selectionHandler;	// 16 = 0x10
}
@property(retain) id selectionHandler;	// G=0x366752ed; S=0x366752ad; converted property
+ (id)factoryForControlType:(int)controlType hidePartialPlayedImages:(BOOL)images;	// 0x36675185
- (id)initFactoryForControlType:(int)controlType hidePartialPlayedImages:(BOOL)images;	// 0x366751d1
- (id)_acquiredDateBasedAssetListItem:(id)item currentControl:(id)control;	// 0x3667560d
- (id)_acquiredDateFromAsset:(id)asset;	// 0x36675dc9
- (id)_airedDateFromAsset:(id)asset;	// 0x36675dfd
- (void)_assets:(id)assets areHD:(BOOL *)hd haveUnplayed:(BOOL *)unplayed havePartiallyPlayed:(BOOL *)played latestDate:(id *)date;	// 0x36675fb9
- (void)_badgeListItem:(id)item withInfoFromAsset:(id)asset setRightJustifiedText:(BOOL *)text;	// 0x36675e31
- (id)_episodeBasedAssetListItem:(id)item currentControl:(id)control;	// 0x36675821
- (id)_listItemForAsset:(id)asset currentControl:(id)control;	// 0x366755bd
- (void)_markPlayedUnplayedState:(id)state markNew:(BOOL)aNew markPartialPlayed:(BOOL)played;	// 0x366760ed
- (id)_posterControlForSeriesArray:(id)seriesArray currentControl:(id)control;	// 0x36675b29
- (id)_previewControlForData:(id)data currentControl:(id)control;	// 0x36675c7d
- (id)_showBasedAssetListItem:(id)item currentControl:(id)control;	// 0x3667570d
- (id)_showBasedSeriesItem:(id)item currentControl:(id)control;	// 0x36675991
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x366752fd
- (void)dealloc;	// 0x36675261
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x366754d5
// converted property getter: - (id)selectionHandler;	// 0x366752ed
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x366752ad
@end

