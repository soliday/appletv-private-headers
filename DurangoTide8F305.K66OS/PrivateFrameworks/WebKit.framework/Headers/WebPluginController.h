/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPluginContainerCheckController.h"
#import "WebPluginManualLoader.h"
#import <NSObject.h> // Unknown library

@class WAKView, NSMutableArray, NSMutableSet, WebDataSource;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {
@private
	WAKView *_documentView;	// 4 = 0x4
	WebDataSource *_dataSource;	// 8 = 0x8
	NSMutableArray *_views;	// 12 = 0xc
	BOOL _started;	// 16 = 0x10
	NSMutableSet *_checksInProgress;	// 20 = 0x14
	NSMutableArray *_viewsNotInDocument;	// 24 = 0x18
}
+ (void)addPlugInView:(id)view;	// 0x33fdba1d
+ (BOOL)isPlugInView:(id)view;	// 0x33fdafe1
+ (id)plugInViewWithArguments:(id)arguments fromPluginPackage:(id)pluginPackage;	// 0x33fdb709
+ (void)pluginViewHidden:(id)hidden;	// 0x3401fe75
- (id)initWithDocumentView:(id)documentView;	// 0x33fc53ed
- (id)URLPolicyCheckReferrer;	// 0x34020221
- (void)_cancelOutstandingChecks;	// 0x33fd7fa5
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)loadRequest;	// 0x3402071d
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)loadRequest inFrame:(id)frame resultObject:(id)object selector:(SEL)selector;	// 0x3402065d
- (void)_webPluginContainerPostMediaPlayerNotification:(int)notification forElement:(id)element;	// 0x33fdce1d
- (void)_webPluginContainerSetMediaPlayerProxy:(id)proxy forElement:(id)element;	// 0x33fdb96d
- (void)addPlugin:(id)plugin;	// 0x33fdbb11
- (void)dealloc;	// 0x33fd80c1
- (void)destroyAllPlugins;	// 0x33fd7d49
- (void)destroyOnePlugin:(id)plugin;	// 0x33fdcbe9
- (void)destroyPlugin:(id)plugin;	// 0x33fdc99d
- (BOOL)plugInsAreRunning;	// 0x34020789
- (void)pluginView:(id)view receivedData:(id)data;	// 0x3401ff11
- (void)pluginView:(id)view receivedError:(id)error;	// 0x3401fed1
- (void)pluginView:(id)view receivedResponse:(id)response;	// 0x3401ff51
- (void)pluginViewCreated:(id)created;	// 0x33fdba71
- (void)pluginViewFinishedLoading:(id)loading;	// 0x3401fe95
- (BOOL)processingUserGesture;	// 0x340206cd
- (void)setDataSource:(id)source;	// 0x33fc5989
- (void)showStatus:(id)status;	// 0x3402026d
- (void)startAllPlugins;	// 0x33fc7d01
- (void)stopAllPlugins;	// 0x33fd7ead
- (void)stopOnePlugin:(id)plugin;	// 0x33fdca61
- (id)superlayerForPluginView:(id)pluginView;	// 0x34020755
- (id)webFrame;	// 0x33fdb929
- (void)webPlugInContainerDidHideFullScreenForView:(id)webPlugInContainer;	// 0x340202d5
- (void)webPlugInContainerLoadRequest:(id)containerLoadRequest inFrame:(id)frame;	// 0x3402035d
- (void)webPlugInContainerShowStatus:(id)containerShowStatus;	// 0x34020281
- (void)webPlugInContainerWillShowFullScreenForView:(id)webPlugInContainer;	// 0x34020319
- (id)webView;	// 0x33fdbf9d
@end

