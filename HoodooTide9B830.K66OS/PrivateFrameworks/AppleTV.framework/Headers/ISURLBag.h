/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class SSNetworkConstraints, NSArray, SSURLBagContext, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface ISURLBag : NSObject {
@private
	SSURLBagContext *_context;	// 4 = 0x4
	SSNetworkConstraints *_defaultConstraints;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_guidPatterns;	// 16 = 0x10
	NSSet *_guidSchemes;	// 20 = 0x14
	NSDictionary *_headerPatterns;	// 24 = 0x18
	double _invalidationTime;	// 28 = 0x1c
}
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x32b6dd69; S=0x32b6dd25; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x32b6dda1; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x32b6ce61; 
@property(assign, nonatomic) double invalidationTime;	// G=0x32b6ea65; S=0x32b6ea7d; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x32b6cf81; 
+ (id)_copyFallbackContextForContext:(id)context;	// 0x32b6ddd9
+ (void)_loadItemKindURLBagKeyMap;	// 0x32b6cb59
+ (id)_urlBagForContext:(id)context;	// 0x32b6c9c9
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x32b6d7f9
+ (void)invalidateAllBags;	// 0x32b6c6b5
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x32b6d895
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x32b6c789
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x32b6d931
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x32b6cdc1
+ (id)urlBagForContext:(id)context;	// 0x32b6ca89
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x32b6d9e5
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x32b6da59
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x32b6db0d
- (id)init;	// 0x32b6bf21
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x32b6bf69
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x32b6c031
// declared property getter: - (id)URLBagContext;	// 0x32b6dd69
// declared property getter: - (id)URLBagDictionary;	// 0x32b6dda1
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x32b6d5dd
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x32b6de21
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x32b6dfc1
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x32b6e101
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x32b6e2d9
- (id)_networkConstraintsCachePath;	// 0x32b6e539
- (void)_setDictionary:(id)dictionary;	// 0x32b6e5e5
- (void)_writeNetworkConstraintsCacheFile;	// 0x32b6e689
- (void)_writeURLResolutionCacheFile;	// 0x32b6e841
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x32b6ce61
- (id)copyExtraHeadersForURL:(id)url;	// 0x32b6c221
- (void)dealloc;	// 0x32b6c185
- (void)invalidate;	// 0x32b6dba9
// declared property getter: - (double)invalidationTime;	// 0x32b6ea65
// declared property getter: - (BOOL)isValid;	// 0x32b6cf81
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x32b6c441
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x32b6cfd1
- (id)sanitizedURLForURL:(id)url;	// 0x32b6dbf1
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x32b6d0a1
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x32b6ea7d
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x32b6dd25
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x32b6d2d9
- (id)urlForKey:(id)key;	// 0x32b6d469
- (BOOL)urlIsTrusted:(id)trusted;	// 0x32b6d4b5
- (id)valueForKey:(id)key;	// 0x32b6d7d9
@end

