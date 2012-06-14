/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTabControlDelegate.h"
#import "ATVGenericCollectionController.h"
#import "BRTumblerDelegate.h"
#import "BRTumblerDataSource.h"
#import "AppleTV-Structs.h"

@class ATVTabWithTitleListHeaderControl, ATVTumblerWithTextListHeaderControl, ATVURLDocument, NSString;

__attribute__((visibility("hidden")))
@interface ATVListByNavigationController : ATVGenericCollectionController <BRTumblerDelegate, BRTumblerDataSource, BRTabControlDelegate> {
@private
	ATVTumblerWithTextListHeaderControl *_tumblerListHeader;	// 156 = 0x9c
	ATVTabWithTitleListHeaderControl *_tabListHeader;	// 160 = 0xa0
	ATVURLDocument *_documentForTumblerChange;	// 164 = 0xa4
	NSString *_onNavigate;	// 168 = 0xa8
	OpaqueJSValue *_lastEvent;	// 172 = 0xac
}
- (id)initWithDictionary:(id)dictionary;	// 0x32930d09
- (id)initWithFeedElement:(id)feedElement;	// 0x32930c65
- (void)_callJavaScriptEventOnCancel;	// 0x329324f5
- (void)_callJavaScriptOnNavigateHandler:(id)handler;	// 0x32932639
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x32932c11
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x32932b09
- (void)_cancelAllDocumentRequests;	// 0x329324a5
- (void)_didNavigateToIndex:(unsigned)index;	// 0x3293291d
- (void)_documentReadyNotification:(id)notification;	// 0x329315e9
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x32932ca9
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x32932bd1
- (void)_initWithStartingIndex:(unsigned)startingIndex;	// 0x3293129d
- (void)_loadListForURL:(id)url;	// 0x32931439
- (id)_tumblerCustomTextAttributes;	// 0x32931415
- (id)_tumblerTextAttributes;	// 0x329313f1
- (void)_updateListHeader;	// 0x32931aed
- (void)_willNavigate;	// 0x329325e5
- (id)accessibilityLabel;	// 0x32932ce9
- (void)dealloc;	// 0x32930de9
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0x32931001
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x32931259
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x32931289
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x32931299
- (void)tumblerControl:(id)control didTumbleToItemAtIndex:(unsigned)index;	// 0x3293121d
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0x32931095
- (void)tumblerControlWillTumble:(id)tumblerControl;	// 0x3293120d
- (void)wasPushed;	// 0x32930e9d
@end

