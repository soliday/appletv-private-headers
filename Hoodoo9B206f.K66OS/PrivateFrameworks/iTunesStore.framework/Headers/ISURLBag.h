/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSDictionary, NSArray, SSURLBagContext, SSNetworkConstraints, NSSet;

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
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x3010199d; S=0x30101959; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x301019d5; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x3010098d; 
@property(assign, nonatomic) double invalidationTime;	// G=0x3010276d; S=0x30100e41; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x30100aad; 
+ (id)_copyFallbackContextForContext:(id)context;	// 0x30101a89
+ (void)_loadItemKindURLBagKeyMap;	// 0x30100685
+ (id)_urlBagForContext:(id)context;	// 0x301004f5
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x3010142d
+ (void)invalidateAllBags;	// 0x301001e1
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x301014c9
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x301002b5
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x30101565
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x301008ed
+ (id)urlBagForContext:(id)context;	// 0x301005b5
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x30101619
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x3010168d
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x30101741
- (id)init;	// 0x300ff9fd
- (id)initWithContentsOfFile:(id)file;	// 0x300ffa45
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x300ffabd
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x300ffb85
// declared property getter: - (id)URLBagContext;	// 0x3010199d
// declared property getter: - (id)URLBagDictionary;	// 0x301019d5
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x301011e5
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x30101ad1
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x30101c71
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x30101db1
- (CFStringRef)_diskCacheExpirationTimeKey;	// 0x30101f89
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x30101fe1
- (id)_networkConstraintsCachePath;	// 0x30102241
- (void)_setDictionary:(id)dictionary;	// 0x301022ed
- (void)_writeNetworkConstraintsCacheFile;	// 0x30102391
- (void)_writeURLResolutionCacheFile;	// 0x30102549
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x3010098d
- (id)copyExtraHeadersForURL:(id)url;	// 0x300ffd4d
- (void)dealloc;	// 0x300ffcb1
- (void)invalidate;	// 0x301017dd
// declared property getter: - (double)invalidationTime;	// 0x3010276d
// declared property getter: - (BOOL)isValid;	// 0x30100aad
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x300fff6d
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x30100afd
- (id)sanitizedURLForURL:(id)url;	// 0x30101825
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x30100bcd
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x30100e41
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x30101959
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x30100ee1
- (id)urlForKey:(id)key;	// 0x30101071
- (BOOL)urlIsTrusted:(id)trusted;	// 0x301010bd
- (id)valueForKey:(id)key;	// 0x3010140d
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x30101a0d
@end

