/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSURL, NSDictionary, LSApplicationProxy;

@interface LSResourceProxy : NSObject {
@private
	NSString *_localizedName;	// 4 = 0x4
	NSString *_boundApplicationIdentifier;	// 8 = 0x8
	NSURL *_boundContainerURL;	// 12 = 0xc
	NSURL *_boundResourcesDirURL;	// 16 = 0x10
	NSDictionary *_boundIconsDictionary;	// 20 = 0x14
	NSString *_boundIconCacheKey;	// 24 = 0x18
	NSArray *_boundIconFileNames;	// 28 = 0x1c
	LSApplicationProxy *_typeOwner;	// 32 = 0x20
	BOOL _boundIconIsPrerendered;	// 36 = 0x24
	BOOL _boundIconIsBadge;	// 37 = 0x25
}
@property(retain) NSString *boundApplicationIdentifier;	// G=0x34996bb1; S=0x34997595; converted property
@property(retain) NSURL *boundContainerURL;	// G=0x34996bc1; S=0x3499754d; converted property
@property(retain) NSString *boundIconCacheKey;	// G=0x34996bf1; S=0x34997465; converted property
@property(retain) NSArray *boundIconFileNames;	// G=0x34996c01; S=0x3499741d; converted property
@property(readonly, assign, nonatomic) BOOL boundIconIsBadge;	// G=0x34996c41; 
@property(assign) BOOL boundIconIsPrerendered;	// G=0x34996c21; S=0x34996c31; converted property
@property(retain) NSDictionary *boundIconsDictionary;	// G=0x34996be1; S=0x349974ad; converted property
@property(retain) id boundResourcesDirectoryURL;	// G=0x34996bd1; S=0x34997505; converted property
@property(readonly, assign, nonatomic) NSDictionary *iconsDictionary;	// G=0x349974f5; 
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x34996c6d; @synthesize=_localizedName
@property(retain) LSApplicationProxy *typeOwner;	// G=0x34996c11; S=0x349973d5; converted property
- (id)_initWithLocalizedName:(id)localizedName;	// 0x349976fd
- (id)_initWithLocalizedName:(id)localizedName boundApplicationIdentifier:(id)identifier boundContainerURL:(id)url boundResourcesDirectoryURL:(id)url4 boundIconsDictionary:(id)dictionary boundIconCacheKey:(id)key boundIconFileNames:(id)names typeOwner:(id)owner boundIconIsPrerendered:(BOOL)prerendered boundIconIsBadge:(BOOL)badge;	// 0x34996d39
// converted property getter: - (id)boundApplicationIdentifier;	// 0x34996bb1
// converted property getter: - (id)boundContainerURL;	// 0x34996bc1
// converted property getter: - (id)boundIconCacheKey;	// 0x34996bf1
// converted property getter: - (id)boundIconFileNames;	// 0x34996c01
// declared property getter: - (BOOL)boundIconIsBadge;	// 0x34996c41
// converted property getter: - (BOOL)boundIconIsPrerendered;	// 0x34996c21
// converted property getter: - (id)boundIconsDictionary;	// 0x34996be1
// converted property getter: - (id)boundResourcesDirectoryURL;	// 0x34996bd1
- (void)dealloc;	// 0x34997625
- (id)iconDataForStyle:(id)style width:(int)width height:(int)height options:(unsigned)options;	// 0x34997209
- (id)iconDataForVariant:(int)variant;	// 0x34996e61
- (id)iconStyleDomain;	// 0x34996c61
// declared property getter: - (id)iconsDictionary;	// 0x349974f5
// declared property getter: - (id)localizedName;	// 0x34996c6d
// converted property setter: - (void)setBoundApplicationIdentifier:(id)identifier;	// 0x34997595
// converted property setter: - (void)setBoundContainerURL:(id)url;	// 0x3499754d
// converted property setter: - (void)setBoundIconCacheKey:(id)key;	// 0x34997465
// converted property setter: - (void)setBoundIconFileNames:(id)names;	// 0x3499741d
- (void)setBoundIconIsBadge:(BOOL)badge;	// 0x34996c51
// converted property setter: - (void)setBoundIconIsPrerendered:(BOOL)prerendered;	// 0x34996c31
// converted property setter: - (void)setBoundIconsDictionary:(id)dictionary;	// 0x349974ad
// converted property setter: - (void)setBoundResourcesDirectoryURL:(id)url;	// 0x34997505
- (void)setLocalizedName:(id)name;	// 0x349975dd
// converted property setter: - (void)setTypeOwner:(id)owner;	// 0x349973d5
// converted property getter: - (id)typeOwner;	// 0x34996c11
@end

