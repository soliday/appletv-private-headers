/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library

@class WebViewPrivate;

@interface WebView : WAKView {
@private
	WebViewPrivate *_private;	// 68 = 0x44
}
@property(assign) id UIDelegate;	// G=0x3524c04d; S=0x35245e95; converted property
@property(assign) BOOL allowsRemoteInspection;	// G=0x352ab88d; S=0x35245f01; converted property
@property(assign) BOOL allowsUndo;	// G=0x352abc99; S=0x352abcb9; converted property
@property(retain) id applicationNameForUserAgent;	// G=0x35267b0d; S=0x35245f5d; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x35240bd1; S=0x352b2109; converted property
@property(retain) id caretChangeListener;	// G=0x352ab935; S=0x352ab955; converted property
@property(assign, getter=isContinuousSpellCheckingEnabled) BOOL continuousSpellCheckingEnabled;	// G=0x35264625; S=0x352651d5; converted property
@property(retain) id currentNodeHighlight;	// G=0x352449f5; S=0x352ac421; converted property
@property(retain) id customTextEncodingName;	// G=0x352acc79; S=0x352accf5; converted property
@property(retain) id customUserAgent;	// G=0x352acf1d; S=0x352acf69; converted property
@property(assign) BOOL defersCallbacks;	// G=0x3525a859; S=0x3524c615; converted property
@property(assign) id downloadDelegate;	// G=0x3523fc51; S=0x35245e75; converted property
@property(assign) BOOL drawsBackground;	// G=0x35240ba5; S=0x35263b31; converted property
@property(assign, getter=isEditable) BOOL editable;	// G=0x35253f81; S=0x352b56b9; converted property
@property(assign) id editingDelegate;	// G=0x352abd2d; S=0x35243771; converted property
@property(assign) id frameLoadDelegate;	// G=0x3524c379; S=0x352451f5; converted property
@property(retain) id groupName;	// G=0x352ac6fd; S=0x352412c5; converted property
@property(assign) id historyDelegate;	// G=0x35251021; S=0x352aeff9; converted property
@property(retain) id hostWindow;	// G=0x352abbe9; S=0x352acab5; converted property
@property(assign) BOOL interactiveFormValidationEnabled;	// G=0x35243515; S=0x352abadd; converted property
@property(retain) id mainFrameURL;	// G=0x3524c53d; S=0x352ac67d; converted property
@property(retain) id mediaStyle;	// G=0x35240fd1; S=0x352aceb9; converted property
@property(assign) float mediaVolume;	// G=0x352abcd9; S=0x352b5135; converted property
@property(assign) float pageSizeMultiplier;	// G=0x352af0e1; S=0x352af0cd; converted property
@property(assign) id policyDelegate;	// G=0x352abbc9; S=0x35245821; converted property
@property(retain) id preferences;	// G=0x3523efa1; S=0x352ad861; converted property
@property(retain) id preferencesIdentifier;	// G=0x352ad779; S=0x352ad7a1; converted property
@property(assign) id resourceLoadDelegate;	// G=0x3523fc31; S=0x3524588d; converted property
@property(assign) id scriptDebugDelegate;	// G=0x352543b1; S=0x352aefa1; converted property
@property(assign, getter=isSelectTrailingWhitespaceEnabled) BOOL selectTrailingWhitespaceEnabled;	// G=0x352aba59; S=0x352ae6dd; converted property
@property(assign) BOOL shouldCloseWithWindow;	// G=0x352abba9; S=0x352abb89; converted property
@property(assign) BOOL shouldUpdateWhileOffscreen;	// G=0x35240c11; S=0x352ac471; converted property
@property(assign) BOOL smartInsertDeleteEnabled;	// G=0x352abd0d; S=0x352af251; converted property
@property(assign) BOOL tabKeyCyclesThroughElements;	// G=0x352abc65; S=0x352abc0d; converted property
@property(assign) float textSizeMultiplier;	// G=0x352ad56d; S=0x352ad5bd; converted property
@property(retain) id typingStyle;	// G=0x352af229; S=0x352af1f9; converted property
@property(assign) BOOL usesPageCache;	// G=0x35242ef9; S=0x352ae675; converted property
@property(assign) int validationMessageTimerMagnification;	// G=0x35243535; S=0x352abafd; converted property
+ (id)MIMETypesShownAsHTML;	// 0x352ac185
+ (BOOL)_HTTPPipeliningEnabled;	// 0x352b4879
+ (id)_MIMETypeForFile:(id)file;	// 0x352ae945
+ (void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)sourceOrigin destinationProtocol:(id)protocol destinationHost:(id)host allowDestinationSubdomains:(BOOL)subdomains;	// 0x352b34cd
+ (void)_addUserScriptToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectionTime:(int)time;	// 0x352aeaa5
+ (void)_addUserScriptToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectionTime:(int)time injectedFrames:(int)frames;	// 0x352b39f9
+ (void)_addUserStyleSheetToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist;	// 0x352aeaed
+ (void)_addUserStyleSheetToGroup:(id)group world:(id)world source:(id)source url:(id)url whitelist:(id)whitelist blacklist:(id)blacklist injectedFrames:(int)frames;	// 0x352b3d11
+ (BOOL)_allowsRoundingHacks;	// 0x352b2dcd
+ (unsigned)_cacheModel;	// 0x3524657d
+ (BOOL)_canHandleRequest:(id)request;	// 0x3524bd81
+ (BOOL)_canHandleRequest:(id)request forMainFrame:(BOOL)mainFrame;	// 0x3524bd99
+ (BOOL)_canShowMIMEType:(id)type allowingPlugins:(BOOL)plugins;	// 0x3524f769
+ (id)_decodeData:(id)data;	// 0x352b3191
+ (double)_defaultMinimumTimerInterval;	// 0x352b4875
+ (unsigned)_didSetCacheModel;	// 0x3523b379
+ (void)_disableRemoteInspector;	// 0x352aea39
+ (void)_enableRemoteInspector;	// 0x352aea05
+ (id)_generatedMIMETypeForURLScheme:(id)urlscheme;	// 0x352aea6d
+ (Class)_getPDFRepresentationClass;	// 0x35250345
+ (Class)_getPDFViewClass;	// 0x3524ff61
+ (void)_handleMemoryWarning;	// 0x352b2b89
+ (BOOL)_hasPluginForNodeBeenHalted:(id)nodeBeenHalted;	// 0x352abb61
+ (BOOL)_isNodeHaltedPlugin:(id)plugin;	// 0x352abb5d
+ (BOOL)_isRemoteInspectorEnabled;	// 0x352462c1
+ (void)_makeAllWebViewsPerformSelector:(SEL)selector;	// 0x352abef9
+ (unsigned)_maxCacheModelInAnyInstance;	// 0x352b0071
+ (unsigned)_maximumImageSizeBeforeSubsampling;	// 0x352b34c9
+ (void)_preferencesChangedNotification:(id)notification;	// 0x3523b219
+ (void)_preferencesRemovedNotification:(id)notification;	// 0x352b00f1
+ (void)_preflightSpellChecker;	// 0x352abd65
+ (void)_preflightSpellCheckerNow:(id)now;	// 0x352abd61
+ (id)_productivityDocumentMIMETypes;	// 0x352532ed
+ (void)_registerPluginMIMEType:(id)type;	// 0x35257369
+ (void)_registerURLSchemeAsSecure:(id)secure;	// 0x352b4795
+ (void)_registerViewClass:(Class)aClass representationClass:(Class)aClass2 forURLScheme:(id)urlscheme;	// 0x352b2f9d
+ (void)_removeAllUserContentFromGroup:(id)group;	// 0x352b45a1
+ (void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)sourceOrigin destinationProtocol:(id)protocol destinationHost:(id)host allowDestinationSubdomains:(BOOL)subdomains;	// 0x352b3761
+ (void)_removeUserScriptFromGroup:(id)group world:(id)world url:(id)url;	// 0x352b4021
+ (void)_removeUserScriptsFromGroup:(id)group world:(id)world;	// 0x352b4379
+ (void)_removeUserStyleSheetFromGroup:(id)group world:(id)world url:(id)url;	// 0x352b41cd
+ (void)_removeUserStyleSheetsFromGroup:(id)group world:(id)world;	// 0x352b448d
+ (void)_reportException:(OpaqueJSValue *)exception inContext:(OpaqueJSContext *)context;	// 0x352b2a9d
+ (BOOL)_representationExistsForURLScheme:(id)urlscheme;	// 0x3524f24d
+ (void)_resetOriginAccessWhitelists;	// 0x352b39f5
+ (void)_restartHaltedPluginForNode:(id)node;	// 0x352abb65
+ (void)_setAllowsRoundingHacks:(BOOL)hacks;	// 0x35239fe5
+ (void)_setAlwaysUsesComplexTextCodePath:(BOOL)path;	// 0x352b2dbd
+ (void)_setCacheModel:(unsigned)model;	// 0x3523b389
+ (void)_setDomainRelaxationForbidden:(BOOL)forbidden forURLScheme:(id)urlscheme;	// 0x352b46a1
+ (void)_setHTTPPipeliningEnabled:(BOOL)enabled;	// 0x352b4885
+ (void)_setLoadResourcesSerially:(BOOL)serially;	// 0x352b0261
+ (void)_setMaximumImageSizeBeforeSubsampling:(unsigned)subsampling;	// 0x352b34c1
+ (void)_setPDFRepresentationClass:(Class)aClass;	// 0x3523c8f9
+ (void)_setPDFViewClass:(Class)aClass;	// 0x3523c909
+ (void)_setShouldUseFontSmoothing:(BOOL)_set;	// 0x352b34a5
+ (BOOL)_shouldUseFontSmoothing;	// 0x352b34b5
+ (id)_standardUserAgentWithApplicationName:(id)applicationName;	// 0x3524b215
+ (id)_standardUserAgentWithApplicationName:(id)applicationName osMarketingVersion:(id)version;	// 0x3524b2f9
+ (id)_supportedMIMETypes;	// 0x352ae819
+ (void)_unregisterPluginMIMEType:(id)type;	// 0x352ae881
+ (void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)mimetype;	// 0x352b2e5d
+ (BOOL)_viewClass:(Class *)aClass andRepresentationClass:(Class *)aClass2 forMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x3524f78d
+ (BOOL)canCloseAllWebViews;	// 0x352b2dd9
+ (BOOL)canShowFile:(id)file;	// 0x352ae8f5
+ (BOOL)canShowMIMEType:(id)type;	// 0x3524f751
+ (BOOL)canShowMIMETypeAsHTML:(id)html;	// 0x3524113d
+ (void)closeAllWebViews;	// 0x352b2de5
+ (void)drainLayerPool;	// 0x35246a21
+ (void)enableWebThread;	// 0x35239d6d
+ (void)garbageCollectNow;	// 0x35246785
+ (void)initialize;	// 0x352396d5
+ (BOOL)isCharacterSmartReplaceExempt:(unsigned short)exempt isPreviousCharacter:(BOOL)character;	// 0x352b2da5
+ (void)purgeInactiveFontData;	// 0x35246961
+ (void)registerForMemoryNotifications;	// 0x35239ff5
+ (void)registerURLSchemeAsLocal:(id)local;	// 0x352abf21
+ (void)registerViewClass:(Class)aClass representationClass:(Class)aClass2 forMIMEType:(id)mimetype;	// 0x35257431
+ (void)releaseFastMallocMemory;	// 0x35246ae9
+ (void)setMIMETypesShownAsHTML:(id)html;	// 0x352ac001
+ (id)sharedWebInspectorServer;	// 0x352462f5
+ (BOOL)shouldIncludeInWebKitStatistics;	// 0x3523f5f5
+ (void)willEnterBackgroundWithCompletionHandler:(id)completionHandler;	// 0x35246739
- (id)initSimpleHTMLDocumentWithStyle:(id)style frame:(CGRect)frame preferences:(id)preferences groupName:(id)name;	// 0x35262f3d
- (id)initWithFrame:(CGRect)frame;	// 0x3523c91d
- (id)initWithFrame:(CGRect)frame frameName:(id)name groupName:(id)name3;	// 0x3523c949
// converted property getter: - (id)UIDelegate;	// 0x3524c04d
- (id)_UIDelegateForSelector:(SEL)selector;	// 0x3524e325
- (id)_UIDelegateForwarder;	// 0x352ae219
- (id)_UIKitDelegate;	// 0x35239379
- (id)_UIKitDelegateForwarder;	// 0x35244b59
- (void)_addObject:(id)object forIdentifier:(unsigned long)identifier;	// 0x3524c8c9
- (void)_addToAllWebViewsSet;	// 0x3524128d
- (BOOL)_allowsMessaging;	// 0x3525b771
- (void)_attachScriptDebuggerToAllFrames;	// 0x352b1fa5
- (BOOL)_becomingFirstResponderFromOutside;	// 0x352abd69
- (void)_cacheFrameLoadDelegateImplementations;	// 0x35245289
- (void)_cacheHistoryDelegateImplementations;	// 0x352b1b49
- (void)_cacheResourceLoadDelegateImplementations;	// 0x35245921
- (void)_cacheScriptDebugDelegateImplementations;	// 0x352b18dd
- (BOOL)_canResetZoom:(BOOL)zoom;	// 0x352ad195
- (BOOL)_canShowMIMEType:(id)type;	// 0x352504fd
- (BOOL)_canZoomIn:(BOOL)anIn;	// 0x352ad3c9
- (BOOL)_canZoomOut:(BOOL)anOut;	// 0x352ad471
- (BOOL)_catchesDelegateExceptions;	// 0x352aba39
- (void)_clearBackForwardCache;	// 0x352b0eed
- (void)_clearDelegates;	// 0x352ae421
- (void)_clearLayerSyncLoopObserver;	// 0x3525aef1
- (void)_clearMainFrameName;	// 0x352b28b1
- (void)_close;	// 0x352b0b55
- (void)_closePluginDatabases;	// 0x352ade6d
- (void)_closeWindow;	// 0x352ae309
- (void)_closeWithFastTeardown;	// 0x352adeb9
- (void)_closingEventHandling;	// 0x352b6329
- (void)_commonInitializationWithFrameName:(id)frameName groupName:(id)name usesDocumentViews:(BOOL)views;	// 0x3523cb69
- (OpaqueJSValue *)_computedStyleIncludingVisitedInfo:(OpaqueJSContext *)info forElement:(OpaqueJSValue *)element;	// 0x352b59f9
- (BOOL)_continuousCheckingAllowed;	// 0x352affe5
- (BOOL)_cookieEnabled;	// 0x352ab995
- (void)_destroyAllPlugIns;	// 0x352b1de9
- (void)_detachScriptDebuggerFromAllFrames;	// 0x352b1fe9
- (id)_deviceOrientationProvider;	// 0x352abdcd
- (void)_didCommitLoadForFrame:(id)frame;	// 0x35252ee1
- (void)_didFinishScrollingOrZooming;	// 0x35262d55
- (void)_dispatchPendingLoadRequests;	// 0x352b0279
- (void)_dispatchTileDidDraw:(id)_dispatchTile;	// 0x3524f4f1
- (void)_dispatchUnloadEvent;	// 0x352b0945
- (id)_displayURL;	// 0x3524c461
- (void)_documentScaleChanged;	// 0x352449c9
- (id)_downloadURL:(id)url;	// 0x352adf05
- (id)_editingDelegateForwarder;	// 0x352643f9
- (id)_elementAtWindowPoint:(CGPoint)windowPoint;	// 0x352ac9a9
- (void)_executeCoreCommandByName:(id)name value:(id)value;	// 0x352b2635
- (CGSize)_fixedLayoutSize;	// 0x352ab9f1
- (id)_fixedPositionContent;	// 0x3524de79
- (id)_focusedFrame;	// 0x3523940d
- (id)_formDelegate;	// 0x352ab8ad
- (id)_formDelegateForSelector:(SEL)selector;	// 0x352ae161
- (id)_formDelegateForwarder;	// 0x352ae069
- (id)_frameForCurrentSelection;	// 0x352aef91
- (id)_frameLoadDelegateForwarder;	// 0x3524c2a9
- (id)_frameViewAtWindowPoint:(CGPoint)windowPoint;	// 0x352aff01
- (void)_geolocationDidChangePosition:(id)_geolocation;	// 0x352abe39
- (void)_geolocationDidFailWithError:(id)_geolocation;	// 0x352abe3d
- (id)_geolocationProvider;	// 0x352abe15
- (id)_globalHistoryItem;	// 0x352b222d
- (BOOL)_inFastImageScalingMode;	// 0x352b1e2d
- (BOOL)_inViewSourceMode;	// 0x352ae545
- (BOOL)_includesFlattenedCompositingLayersWhenDrawingToBitmap;	// 0x352abb3d
- (id)_initWithArguments:(id)arguments;	// 0x352adba1
- (id)_initWithFrame:(CGRect)frame frameName:(id)name groupName:(id)name3 usesDocumentViews:(BOOL)views;	// 0x3523c97d
- (void)_injectSolarWalkQuirksScript;	// 0x352b028d
- (void)_insertNewlineInQuotedContent;	// 0x352afe3d
- (BOOL)_isClosed;	// 0x352ab861
- (BOOL)_isClosing;	// 0x3526478d
- (BOOL)_isLoading;	// 0x352afe9d
- (BOOL)_isMIMETypeRegisteredAsPlugin:(id)plugin;	// 0x352adc5d
- (BOOL)_isPerformingProgrammaticFocus;	// 0x35264329
- (BOOL)_isProcessingUserGesture;	// 0x352b1611
- (BOOL)_isSoftwareRenderable;	// 0x352b2931
- (BOOL)_isStopping;	// 0x3525bda1
- (BOOL)_isUsingAcceleratedCompositing;	// 0x352b202d
- (int)_keyboardUIMode;	// 0x352b0189
- (void)_loadBackForwardListFromOtherView:(id)otherView;	// 0x352b16c5
- (BOOL)_locked_plugInsAreRunningInFrame:(id)frame;	// 0x352ae56d
- (void)_locked_recursivelyPerformPlugInSelector:(SEL)selector inFrame:(id)frame;	// 0x3525d5f1
- (Frame *)_mainCoreFrame;	// 0x352393e1
- (id)_mainFrameOverrideEncoding;	// 0x352acc89
- (void)_mouseDidMoveOverElement:(id)_mouse modifierFlags:(unsigned)flags;	// 0x3525f409
- (BOOL)_mustDrawUnionedRect:(CGRect)rect singleRects:(const CGRect *)rects count:(int)count;	// 0x352ab7c5
- (BOOL)_needsOneShotDrawingSynchronization;	// 0x352abd89
- (BOOL)_needsPreHTML5ParserQuirks;	// 0x35243479
- (BOOL)_needsUnrestrictedGetMatchedCSSRules;	// 0x35243511
- (OpaqueJSValue *)_nodesFromRect:(OpaqueJSContext *)rect forDocument:(OpaqueJSValue *)document x:(int)x y:(int)y top:(unsigned)top right:(unsigned)right bottom:(unsigned)bottom left:(unsigned)left ignoreClipping:(BOOL)clipping;	// 0x352b5d05
- (id)_objectForIdentifier:(unsigned long)identifier;	// 0x3524ea29
- (id)_openNewWindowWithRequest:(id)request;	// 0x352b1635
- (void)_overflowScrollPositionChangedTo:(CGPoint)to forNode:(id)node;	// 0x352b21d9
- (void)_performResponderOperation:(SEL)operation with:(id)with;	// 0x352685e1
- (id)_pluginForExtension:(id)extension;	// 0x352adcd5
- (id)_pluginForMIMEType:(id)mimetype;	// 0x352add45
- (BOOL)_pluginsAreRunning;	// 0x352b1db5
- (id)_policyDelegateForwarder;	// 0x3524b77d
- (void)_popPerformingProgrammaticFocus;	// 0x352ab8f1
- (BOOL)_postsAcceleratedCompositingNotifications;	// 0x352aba9d
- (void)_preferencesChanged:(id)changed;	// 0x352413d5
- (void)_preferencesChangedNotification:(id)notification;	// 0x35246271
- (void)_pushPerformingProgrammaticFocus;	// 0x352ab8cd
- (float)_realZoomMultiplier;	// 0x352411b9
- (BOOL)_realZoomMultiplierIsTextOnly;	// 0x352411d9
- (void)_removeFromAllWebViewsSet;	// 0x352abed9
- (void)_removeObjectForIdentifier:(unsigned long)identifier;	// 0x3525409d
- (void)_replaceSelectionWithNode:(id)node matchStyle:(BOOL)style;	// 0x352afe65
- (void)_resetZoom:(id)zoom isTextOnly:(BOOL)only;	// 0x352ad0d5
- (id)_resourceLoadDelegateForwarder;	// 0x3524eb01
- (id)_responderForResponderOperations;	// 0x3526864d
- (void)_restorePlugInsFromCache;	// 0x352b1f59
- (void)_retrieveKeyboardUIModeFromPreferences:(id)preferences;	// 0x352b59a9
- (void)_scaleWebView:(float)view atOrigin:(CGPoint)origin;	// 0x352b29ed
- (void)_scheduleCompositingLayerSync;	// 0x3525a9ed
- (id)_selectedOrMainFrame;	// 0x352b0231
- (void)_selectionChanged;	// 0x352646ad
- (BOOL)_selectionIsAll;	// 0x352b597d
- (BOOL)_selectionIsCaret;	// 0x352b1389
- (void)_setAllowsMessaging:(BOOL)messaging;	// 0x352440ad
- (void)_setCatchesDelegateExceptions:(BOOL)exceptions;	// 0x352aba19
- (void)_setCookieEnabled:(BOOL)enabled;	// 0x352ab9c1
- (void)_setCustomFixedPositionLayoutRect:(CGRect)rect;	// 0x35244a15
- (void)_setCustomHTMLTokenizerChunkSize:(int)size;	// 0x352b2881
- (void)_setCustomHTMLTokenizerTimeDelay:(double)delay;	// 0x352b2845
- (void)_setDeviceOrientationProvider:(id)provider;	// 0x352abda9
- (void)_setFixedLayoutSize:(CGSize)size;	// 0x35244eed
- (void)_setFontFallbackPrefersPictographs:(BOOL)pictographs;	// 0x35245f21
- (void)_setFormDelegate:(id)delegate;	// 0x35244025
- (void)_setGeolocationProvider:(id)provider;	// 0x352abdf1
- (void)_setGlobalHistoryItem:(HistoryItem *)item;	// 0x35252569
- (void)_setInViewSourceMode:(BOOL)viewSourceMode;	// 0x352ae519
- (void)_setIncludesFlattenedCompositingLayersWhenDrawingToBitmap:(BOOL)bitmap;	// 0x352abb1d
- (void)_setJavaScriptURLsAreAllowed:(BOOL)allowed;	// 0x352b2905
- (BOOL)_setMediaLayer:(id)layer forPluginView:(id)pluginView;	// 0x3525a471
- (void)_setMinimumTimerInterval:(double)interval;	// 0x352b2a61
- (void)_setMouseDownEvent:(id)event;	// 0x352b632d
- (void)_setNeedsOneShotDrawingSynchronization:(BOOL)synchronization;	// 0x3525ac39
- (void)_setNeedsUnrestrictedGetMatchedCSSRules:(BOOL)rules;	// 0x352abe41
- (void)_setNetworkStateIsOnline:(BOOL)online;	// 0x3524650d
- (void)_setPostsAcceleratedCompositingNotifications:(BOOL)notifications;	// 0x352ababd
- (void)_setResourceLoadSchedulerSuspended:(BOOL)suspended;	// 0x352b15f5
- (void)_setToolTip:(id)tip;	// 0x3525f679
- (void)_setUIKitDelegate:(id)delegate;	// 0x35243705
- (void)_setUseFastImageScalingMode:(BOOL)mode;	// 0x352b1e5d
- (void)_setUseFixedLayout:(BOOL)layout;	// 0x352b218d
- (void)_setWantsTelephoneNumberParsing:(BOOL)parsing;	// 0x352440e9
- (void)_setWebGLEnabled:(BOOL)enabled;	// 0x35246401
- (void)_setZoomMultiplier:(float)multiplier isTextOnly:(BOOL)only;	// 0x35241211
- (BOOL)_shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x35268e11
- (void)_startAllPlugIns;	// 0x352b1ec1
- (void)_stopAllPlugIns;	// 0x352b1f0d
- (void)_stopAllPlugInsForPageCache;	// 0x3525d5a5
- (void)_stopAutoscrollTimer;	// 0x352b6549
- (BOOL)_syncCompositingChanges;	// 0x3525ae95
- (id)_touchEventRegions;	// 0x35262579
- (void)_updateActiveState;	// 0x35243fc5
- (BOOL)_useFixedLayout;	// 0x352b2a35
- (BOOL)_usesDocumentViews;	// 0x352406ed
- (id)_videoProxyPluginForMIMEType:(id)mimetype;	// 0x35259e9d
- (BOOL)_viewClass:(Class *)aClass andRepresentationClass:(Class *)aClass2 forMIMEType:(id)mimetype;	// 0x352addb5
- (float)_viewScaleFactor;	// 0x352ae71d
- (void)_viewWillDrawInternal;	// 0x3525aec1
- (BOOL)_wantsTelephoneNumberParsing;	// 0x352abe81
- (BOOL)_webGLEnabled;	// 0x352abead
- (id)_webMailDelegate;	// 0x3524f5f5
- (id)_webcore_effectiveFirstResponder;	// 0x352ac7fd
- (void)_willStartScrollingOrZooming;	// 0x35262c05
- (void)_zoomIn:(id)anIn isTextOnly:(BOOL)only;	// 0x352ad231
- (float)_zoomMultiplier:(BOOL)multiplier;	// 0x352ad519
- (void)_zoomOut:(id)anOut isTextOnly:(BOOL)only;	// 0x352ad2fd
- (BOOL)acceptsFirstResponder;	// 0x352ac8fd
- (void)addCaretChangeListener:(id)listener;	// 0x352ae335
- (void)addVisitedLinks:(id)links;	// 0x352b5165
- (void)alignCenter:(id)center;	// 0x352af429
- (void)alignJustified:(id)justified;	// 0x352af43d
- (void)alignLeft:(id)left;	// 0x352af451
- (void)alignRight:(id)right;	// 0x352af465
// converted property getter: - (BOOL)allowsRemoteInspection;	// 0x352ab88d
// converted property getter: - (BOOL)allowsUndo;	// 0x352abc99
// converted property getter: - (id)applicationNameForUserAgent;	// 0x35267b0d
- (void)applyStyle:(id)style;	// 0x352b57ed
- (BOOL)areMemoryCacheDelegateCallsEnabled;	// 0x352aba79
- (id)backForwardList;	// 0x35244125
// converted property getter: - (CGColorRef)backgroundColor;	// 0x35240bd1
- (BOOL)becomeFirstResponder;	// 0x352ac885
- (BOOL)canBeRemotelyInspected;	// 0x352ae015
- (BOOL)canGoBack;	// 0x35253349
- (BOOL)canGoForward;	// 0x3525338d
- (BOOL)canMakeTextLarger;	// 0x352aed49
- (BOOL)canMakeTextSmaller;	// 0x352aec89
- (BOOL)canMakeTextStandardSize;	// 0x352aee09
- (BOOL)canMarkAllTextMatches;	// 0x352b4cf1
- (BOOL)canResetPageZoom;	// 0x352af189
- (BOOL)canZoomPageIn;	// 0x352af131
- (BOOL)canZoomPageOut;	// 0x352af15d
- (void)capitalizeWord:(id)word;	// 0x352af479
// converted property getter: - (id)caretChangeListener;	// 0x352ab935
- (id)caretChangeListeners;	// 0x352ab975
- (void)caretChanged;	// 0x352b1cb9
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x352af48d
- (void)changeAttributes:(id)attributes;	// 0x352af4a1
- (void)changeBaseWritingDirection:(id)direction;	// 0x352af4b5
- (void)changeBaseWritingDirectionToLTR:(id)ltr;	// 0x352af4c9
- (void)changeBaseWritingDirectionToRTL:(id)rtl;	// 0x352af4dd
- (void)changeColor:(id)color;	// 0x352af4f1
- (void)changeDocumentBackgroundColor:(id)color;	// 0x352af505
- (void)changeFont:(id)font;	// 0x352af519
- (void)changeSpelling:(id)spelling;	// 0x352af52d
- (void)checkSpelling:(id)spelling;	// 0x352af541
- (void)clearText:(id)text;	// 0x352afded
- (void)close;	// 0x352ada79
- (void)complete:(id)complete;	// 0x352af555
- (id)computedStyleForElement:(id)element pseudoElement:(id)element2;	// 0x352af1b5
- (void)copy:(id)copy;	// 0x352af569
- (void)copyFont:(id)font;	// 0x352af57d
- (unsigned)countMatchesForText:(id)text caseSensitive:(BOOL)sensitive highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x352ae781
- (unsigned)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned)options highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x35269601
- (unsigned)countMatchesForText:(id)text options:(unsigned)options highlight:(BOOL)highlight limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x352695d1
- (BOOL)cssAnimationsSuspended;	// 0x352abb69
// converted property getter: - (id)currentNodeHighlight;	// 0x352449f5
// converted property getter: - (id)customTextEncodingName;	// 0x352acc79
// converted property getter: - (id)customUserAgent;	// 0x352acf1d
- (void)cut:(id)cut;	// 0x352af591
- (void)dealloc;	// 0x352adae5
// converted property getter: - (BOOL)defersCallbacks;	// 0x3525a859
- (void)delete:(id)aDelete;	// 0x352af5a5
- (void)deleteBackward:(id)backward;	// 0x352af5b9
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x352af5cd
- (void)deleteForward:(id)forward;	// 0x352af5e1
- (void)deleteSelection;	// 0x352b5785
- (void)deleteToBeginningOfLine:(id)line;	// 0x352af5f5
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x352af609
- (void)deleteToEndOfLine:(id)line;	// 0x352af61d
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x352af631
- (void)deleteToMark:(id)mark;	// 0x352af645
- (void)deleteWordBackward:(id)backward;	// 0x352af659
- (void)deleteWordForward:(id)forward;	// 0x352af66d
- (id)documentViewAtWindowPoint:(CGPoint)windowPoint;	// 0x352aca8d
// converted property getter: - (id)downloadDelegate;	// 0x3523fc51
- (void)drawRect:(CGRect)rect;	// 0x3524d811
- (void)drawSingleRect:(CGRect)rect;	// 0x352b0649
// converted property getter: - (BOOL)drawsBackground;	// 0x35240ba5
- (id)editableDOMRangeForPoint:(CGPoint)point;	// 0x352b5511
// converted property getter: - (id)editingDelegate;	// 0x352abd2d
- (id)elementAtPoint:(CGPoint)point;	// 0x352ac959
- (double)estimatedProgress;	// 0x35253ac9
- (void)finalize;	// 0x352adaa5
- (BOOL)findString:(id)string options:(unsigned)options;	// 0x352b4ad9
// converted property getter: - (id)frameLoadDelegate;	// 0x3524c379
- (BOOL)goBack;	// 0x352ad6ed
- (void)goBack:(id)back;	// 0x352aebc5
- (BOOL)goForward;	// 0x352ad661
- (void)goForward:(id)forward;	// 0x352aebd5
- (BOOL)goToBackForwardItem:(id)backForwardItem;	// 0x352ad621
// converted property getter: - (id)groupName;	// 0x352ac6fd
// converted property getter: - (id)historyDelegate;	// 0x35251021
// converted property getter: - (id)hostWindow;	// 0x352abbe9
- (void)ignoreSpelling:(id)spelling;	// 0x352af681
- (void)indent:(id)indent;	// 0x352af695
- (void)insertBacktab:(id)backtab;	// 0x352af6a9
- (void)insertDictationPhrases:(id)phrases metadata:(id)metadata;	// 0x352b5825
- (void)insertLineBreak:(id)aBreak;	// 0x352af6bd
- (void)insertNewline:(id)newline;	// 0x352af6d1
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x352af6e5
- (void)insertParagraphSeparator:(id)separator;	// 0x352af6f9
- (void)insertTab:(id)tab;	// 0x352af70d
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x352af721
- (void)insertText:(id)text;	// 0x352685cd
- (id)inspector;	// 0x352adfa1
// converted property getter: - (BOOL)interactiveFormValidationEnabled;	// 0x35243515
- (BOOL)isAutomaticDashSubstitutionEnabled;	// 0x352abd55
- (BOOL)isAutomaticLinkDetectionEnabled;	// 0x352abd51
- (BOOL)isAutomaticQuoteSubstitutionEnabled;	// 0x352abd4d
- (BOOL)isAutomaticSpellingCorrectionEnabled;	// 0x352abd5d
- (BOOL)isAutomaticTextReplacementEnabled;	// 0x352abd59
// converted property getter: - (BOOL)isContinuousSpellCheckingEnabled;	// 0x35264625
// converted property getter: - (BOOL)isEditable;	// 0x35253f81
- (BOOL)isFlipped;	// 0x352ab831
- (BOOL)isLoading;	// 0x352ac665
// converted property getter: - (BOOL)isSelectTrailingWhitespaceEnabled;	// 0x352aba59
- (void)lowercaseWord:(id)word;	// 0x352af735
- (id)mainFrame;	// 0x35244895
- (id)mainFrameDocument;	// 0x352ac4c5
- (id)mainFrameIconURL;	// 0x352ac511
- (id)mainFrameTitle;	// 0x352ac61d
// converted property getter: - (id)mainFrameURL;	// 0x3524c53d
- (BOOL)maintainsInactiveSelection;	// 0x35269c09
- (void)makeBaseWritingDirectionLeftToRight:(id)right;	// 0x352af749
- (void)makeBaseWritingDirectionRightToLeft:(id)left;	// 0x352af75d
- (void)makeTextLarger:(id)larger;	// 0x352aeda5
- (void)makeTextSmaller:(id)smaller;	// 0x352aece5
- (void)makeTextStandardSize:(id)size;	// 0x352aee65
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x352af771
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x352af785
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x352af799
- (unsigned)markAllMatchesForText:(id)text caseSensitive:(BOOL)sensitive highlight:(BOOL)highlight limit:(unsigned)limit;	// 0x352ae749
// converted property getter: - (id)mediaStyle;	// 0x35240fd1
// converted property getter: - (float)mediaVolume;	// 0x352abcd9
- (void)mouseDown:(id)down;	// 0x352b6399
- (void)mouseUp:(id)up;	// 0x352b65d1
- (void)moveBackward:(id)backward;	// 0x352af7ad
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x352af7c1
- (void)moveDown:(id)down;	// 0x352af7d5
- (void)moveDownAndModifySelection:(id)selection;	// 0x352af7e9
- (void)moveForward:(id)forward;	// 0x352af7fd
- (void)moveForwardAndModifySelection:(id)selection;	// 0x352af811
- (void)moveLeft:(id)left;	// 0x352af825
- (void)moveLeftAndModifySelection:(id)selection;	// 0x352af839
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x352af84d
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x352af861
- (void)moveRight:(id)right;	// 0x352af875
- (void)moveRightAndModifySelection:(id)selection;	// 0x352af889
- (void)moveToBeginningOfDocument:(id)document;	// 0x352af89d
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x352af8b1
- (void)moveToBeginningOfLine:(id)line;	// 0x352af8c5
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x352af8d9
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x352af8ed
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x352af901
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x352af915
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x352af929
- (void)moveToEndOfDocument:(id)document;	// 0x352af93d
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x352af951
- (void)moveToEndOfLine:(id)line;	// 0x352af965
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x352af979
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x352af98d
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x352af9a1
- (void)moveToEndOfSentence:(id)sentence;	// 0x352af9b5
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x352af9c9
- (void)moveToLeftEndOfLine:(id)line;	// 0x352af9dd
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x352af9f1
- (void)moveToRightEndOfLine:(id)line;	// 0x352afa05
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x352afa19
- (void)moveUp:(id)up;	// 0x352afa2d
- (void)moveUpAndModifySelection:(id)selection;	// 0x352afa41
- (void)moveWordBackward:(id)backward;	// 0x352afa55
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x352afa69
- (void)moveWordForward:(id)forward;	// 0x352afa7d
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x352afa91
- (void)moveWordLeft:(id)left;	// 0x352afaa5
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x352afab9
- (void)moveWordRight:(id)right;	// 0x352afacd
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x352afae1
- (void)orderFrontSubstitutionsPanel:(id)panel;	// 0x352afb09
- (void)outdent:(id)outdent;	// 0x352afaf5
- (Page *)page;	// 0x35254555
- (void)pageDown:(id)down;	// 0x352afb1d
- (void)pageDownAndModifySelection:(id)selection;	// 0x352afb31
// converted property getter: - (float)pageSizeMultiplier;	// 0x352af0e1
- (void)pageUp:(id)up;	// 0x352afb45
- (void)pageUpAndModifySelection:(id)selection;	// 0x352afb59
- (void)paste:(id)paste;	// 0x352afb6d
- (void)pasteAsPlainText:(id)text;	// 0x352afb81
- (void)pasteAsRichText:(id)text;	// 0x352afb95
- (void)pasteFont:(id)font;	// 0x352afba9
- (void)performFindPanelAction:(id)action;	// 0x352afbbd
// converted property getter: - (id)policyDelegate;	// 0x352abbc9
// converted property getter: - (id)preferences;	// 0x3523efa1
// converted property getter: - (id)preferencesIdentifier;	// 0x352ad779
- (id)previousValidKeyView;	// 0x352ac285
- (id)quickLookContentForURL:(id)url;	// 0x3524ada5
- (id)rectsForTextMatches;	// 0x352b4e71
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x35243979
- (void)reload:(id)reload;	// 0x35269c4d
- (void)reloadFromOrigin:(id)origin;	// 0x352aec61
- (void)removeAllCaretChangeListeners;	// 0x352ae3f1
- (void)removeCaretChangeListener:(id)listener;	// 0x352ae3c1
- (void)removeVisitedLink:(id)link;	// 0x352b5405
- (void)replaceSelectionWithArchive:(id)archive;	// 0x352af3e9
- (void)replaceSelectionWithMarkupString:(id)markupString;	// 0x352af3a5
- (void)replaceSelectionWithNode:(id)node;	// 0x352af339
- (void)replaceSelectionWithText:(id)text;	// 0x352af371
- (void)resetPageZoom:(id)zoom;	// 0x352af1a1
// converted property getter: - (id)resourceLoadDelegate;	// 0x3523fc31
// converted property getter: - (id)scriptDebugDelegate;	// 0x352543b1
- (void)scrollDOMRangeToVisible:(id)visible;	// 0x352af029
- (void)scrollDOMRangeToVisible:(id)visible withInset:(float)inset;	// 0x352af079
- (void)scrollLineDown:(id)down;	// 0x352afbd1
- (void)scrollLineUp:(id)up;	// 0x352afbe5
- (void)scrollPageDown:(id)down;	// 0x352afbf9
- (void)scrollPageUp:(id)up;	// 0x352afc0d
- (void)scrollToBeginningOfDocument:(id)document;	// 0x352afc21
- (void)scrollToEndOfDocument:(id)document;	// 0x352afc35
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x352ac741
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x352ae7bd
- (void)selectAll:(id)all;	// 0x352afc49
- (void)selectLine:(id)line;	// 0x352afc5d
- (void)selectParagraph:(id)paragraph;	// 0x352afc71
- (void)selectSentence:(id)sentence;	// 0x352afc85
- (void)selectToMark:(id)mark;	// 0x352afc99
- (void)selectWord:(id)word;	// 0x352afcad
- (id)selectedDOMRange;	// 0x352b2521
- (id)selectedFrame;	// 0x35239399
- (int)selectionAffinity;	// 0x352b1361
// converted property setter: - (void)setAllowsRemoteInspection:(BOOL)inspection;	// 0x35245f01
// converted property setter: - (void)setAllowsUndo:(BOOL)undo;	// 0x352abcb9
// converted property setter: - (void)setApplicationNameForUserAgent:(id)userAgent;	// 0x35245f5d
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x352b2109
- (void)setCSSAnimationsSuspended:(BOOL)suspended;	// 0x352b2991
// converted property setter: - (void)setCaretChangeListener:(id)listener;	// 0x352ab955
// converted property setter: - (void)setContinuousSpellCheckingEnabled:(BOOL)enabled;	// 0x352651d5
// converted property setter: - (void)setCurrentNodeHighlight:(id)highlight;	// 0x352ac421
// converted property setter: - (void)setCustomTextEncodingName:(id)name;	// 0x352accf5
// converted property setter: - (void)setCustomUserAgent:(id)agent;	// 0x352acf69
// converted property setter: - (void)setDefersCallbacks:(BOOL)callbacks;	// 0x3524c615
// converted property setter: - (void)setDownloadDelegate:(id)delegate;	// 0x35245e75
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x35263b31
// converted property setter: - (void)setEditable:(BOOL)editable;	// 0x352b56b9
// converted property setter: - (void)setEditingDelegate:(id)delegate;	// 0x35243771
// converted property setter: - (void)setFrameLoadDelegate:(id)delegate;	// 0x352451f5
- (void)setFrameSize:(CGSize)size;	// 0x352b0789
// converted property setter: - (void)setGroupName:(id)name;	// 0x352412c5
// converted property setter: - (void)setHistoryDelegate:(id)delegate;	// 0x352aeff9
// converted property setter: - (void)setHostWindow:(id)window;	// 0x352acab5
// converted property setter: - (void)setInteractiveFormValidationEnabled:(BOOL)enabled;	// 0x352abadd
- (void)setMainFrameDocumentReady:(BOOL)ready;	// 0x3523fd2d
// converted property setter: - (void)setMainFrameURL:(id)url;	// 0x352ac67d
- (void)setMaintainsBackForwardList:(BOOL)list;	// 0x352436c5
- (void)setMark:(id)mark;	// 0x352afcc1
// converted property setter: - (void)setMediaStyle:(id)style;	// 0x352aceb9
// converted property setter: - (void)setMediaVolume:(float)volume;	// 0x352b5135
- (void)setMemoryCacheDelegateCallsEnabled:(BOOL)enabled;	// 0x352b28d9
- (void)setNextKeyView:(id)view;	// 0x352ac76d
// converted property setter: - (void)setPageSizeMultiplier:(float)multiplier;	// 0x352af0cd
// converted property setter: - (void)setPolicyDelegate:(id)delegate;	// 0x35245821
// converted property setter: - (void)setPreferences:(id)preferences;	// 0x352ad861
// converted property setter: - (void)setPreferencesIdentifier:(id)identifier;	// 0x352ad7a1
// converted property setter: - (void)setResourceLoadDelegate:(id)delegate;	// 0x3524588d
// converted property setter: - (void)setScriptDebugDelegate:(id)delegate;	// 0x352aefa1
// converted property setter: - (void)setSelectTrailingWhitespaceEnabled:(BOOL)enabled;	// 0x352ae6dd
- (void)setSelectedDOMRange:(id)range affinity:(int)affinity;	// 0x352b5655
// converted property setter: - (void)setShouldCloseWithWindow:(BOOL)closeWithWindow;	// 0x352abb89
// converted property setter: - (void)setShouldUpdateWhileOffscreen:(BOOL)updateWhileOffscreen;	// 0x352ac471
// converted property setter: - (void)setSmartInsertDeleteEnabled:(BOOL)enabled;	// 0x352af251
// converted property setter: - (void)setTabKeyCyclesThroughElements:(BOOL)elements;	// 0x352abc0d
// converted property setter: - (void)setTextSizeMultiplier:(float)multiplier;	// 0x352ad5bd
// converted property setter: - (void)setTypingStyle:(id)style;	// 0x352af1f9
// converted property setter: - (void)setUIDelegate:(id)delegate;	// 0x35245e95
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x352ae675
// converted property setter: - (void)setValidationMessageTimerMagnification:(int)magnification;	// 0x352abafd
- (void)setWebMailDelegate:(id)delegate;	// 0x352ab915
- (BOOL)shouldClose;	// 0x352b4e4d
// converted property getter: - (BOOL)shouldCloseWithWindow;	// 0x352abba9
// converted property getter: - (BOOL)shouldUpdateWhileOffscreen;	// 0x35240c11
- (void)showGuessPanel:(id)panel;	// 0x352afcd5
// converted property getter: - (BOOL)smartInsertDeleteEnabled;	// 0x352abd0d
- (void)startSpeaking:(id)speaking;	// 0x352afce9
- (void)stopLoading:(id)loading;	// 0x35269dd1
- (void)stopLoadingAndClear;	// 0x352b48dd
- (void)stopSpeaking:(id)speaking;	// 0x352afcfd
- (id)stringByEvaluatingJavaScriptFromString:(id)string;	// 0x352acc4d
- (id)styleDeclarationWithText:(id)text;	// 0x352af2e9
- (void)subscript:(id)subscript;	// 0x352afd11
- (void)superscript:(id)superscript;	// 0x352afd25
- (BOOL)supportsTextEncoding;	// 0x352ace39
- (void)swapWithMark:(id)mark;	// 0x352afd39
// converted property getter: - (BOOL)tabKeyCyclesThroughElements;	// 0x352abc65
- (void)takeFindStringFromSelection:(id)selection;	// 0x352afd4d
- (void)takeStringURLFrom:(id)from;	// 0x352aeb31
- (id)textIteratorForRect:(CGRect)rect;	// 0x352b225d
// converted property getter: - (float)textSizeMultiplier;	// 0x352ad56d
- (void)toggleBaseWritingDirection:(id)direction;	// 0x352afd61
- (void)toggleBold:(id)bold;	// 0x352afe01
- (void)toggleItalic:(id)italic;	// 0x352afe15
- (void)toggleUnderline:(id)underline;	// 0x352afe29
- (void)transpose:(id)transpose;	// 0x352afd75
// converted property getter: - (id)typingStyle;	// 0x352af229
- (void)underline:(id)underline;	// 0x352afd89
- (id)undoManager;	// 0x35269375
- (void)unmarkAllTextMatches;	// 0x352b4d99
- (void)unscript:(id)unscript;	// 0x352afd9d
- (void)updateLayoutIgnorePendingStyleSheets;	// 0x352b08a9
- (void)uppercaseWord:(id)word;	// 0x352afdb1
- (id)userAgentForURL:(id)url;	// 0x3524b04d
// converted property getter: - (BOOL)usesPageCache;	// 0x35242ef9
// converted property getter: - (int)validationMessageTimerMagnification;	// 0x35243535
- (void)viewDidMoveToWindow;	// 0x35243e9d
- (void)viewWillDraw;	// 0x3524d661
- (id)windowScriptObject;	// 0x3525a309
- (void)yank:(id)yank;	// 0x352afdc5
- (void)yankAndSelect:(id)select;	// 0x352afdd9
- (void)zoomPageIn:(id)anIn;	// 0x352af149
- (void)zoomPageOut:(id)anOut;	// 0x352af175
@end

