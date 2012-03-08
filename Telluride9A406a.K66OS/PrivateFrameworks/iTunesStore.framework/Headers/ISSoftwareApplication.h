/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class SSItemContentRating, NSArray, NSString, NSNumber;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
	NSNumber *_accountDSID;	// 4 = 0x4
	NSString *_accountIdentifier;	// 8 = 0x8
	NSString *_bundleIdentifier;	// 12 = 0xc
	NSString *_bundleShortVersionString;	// 16 = 0x10
	NSString *_bundleVersion;	// 20 = 0x14
	NSString *_containerPath;	// 24 = 0x18
	SSItemContentRating *_contentRating;	// 28 = 0x1c
	NSNumber *_itemIdentifier;	// 32 = 0x20
	NSString *_softwareType;	// 36 = 0x24
	NSNumber *_storeFrontIdentifier;	// 40 = 0x28
	NSNumber *_versionIdentifier;	// 44 = 0x2c
	NSArray *_versionOrdering;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *accountDSID;	// G=0x341d69c1; S=0x341d69d1; @synthesize=_accountDSID
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x341d69f5; S=0x341d6a05; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x341d6a29; S=0x341d6a39; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleShortVersionString;	// G=0x341d6a5d; S=0x341d6a6d; @synthesize=_bundleShortVersionString
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x341d6a91; S=0x341d6aa1; @synthesize=_bundleVersion
@property(copy, nonatomic) NSString *containerPath;	// G=0x341d6ac5; S=0x341d6ad5; @synthesize=_containerPath
@property(copy, nonatomic) SSItemContentRating *contentRating;	// G=0x341d6af9; S=0x341d6b09; @synthesize=_contentRating
@property(retain, nonatomic) NSNumber *itemIdentifier;	// G=0x341d6b2d; S=0x341d6b3d; @synthesize=_itemIdentifier
@property(copy, nonatomic) NSString *softwareType;	// G=0x341d6b61; S=0x341d6b71; @synthesize=_softwareType
@property(retain, nonatomic) NSNumber *storeFrontIdentifier;	// G=0x341d6b95; S=0x341d6ba5; @synthesize=_storeFrontIdentifier
@property(retain, nonatomic) NSNumber *versionIdentifier;	// G=0x341d6bc9; S=0x341d6bd9; @synthesize=_versionIdentifier
@property(copy, nonatomic) NSArray *versionOrdering;	// G=0x341d6bfd; S=0x341d6c0d; @synthesize=_versionOrdering
+ (id)lookupAttributeKeys;	// 0x341d60d9
- (id)initWithMobileInstallationDictionary:(id)mobileInstallationDictionary;	// 0x341d5cc9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x341d62d5
- (void)_loadMetadataFromContainer:(id)container;	// 0x341d6561
// declared property getter: - (id)accountDSID;	// 0x341d69c1
// declared property getter: - (id)accountIdentifier;	// 0x341d69f5
// declared property getter: - (id)bundleIdentifier;	// 0x341d6a29
// declared property getter: - (id)bundleShortVersionString;	// 0x341d6a5d
// declared property getter: - (id)bundleVersion;	// 0x341d6a91
// declared property getter: - (id)containerPath;	// 0x341d6ac5
// declared property getter: - (id)contentRating;	// 0x341d6af9
- (void *)copyXPCEncoding;	// 0x341d6155
- (void)dealloc;	// 0x341d5f0d
- (id)description;	// 0x341d6035
// declared property getter: - (id)itemIdentifier;	// 0x341d6b2d
// declared property setter: - (void)setAccountDSID:(id)dsid;	// 0x341d69d1
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x341d6a05
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x341d6a39
// declared property setter: - (void)setBundleShortVersionString:(id)string;	// 0x341d6a6d
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x341d6aa1
// declared property setter: - (void)setContainerPath:(id)path;	// 0x341d6ad5
// declared property setter: - (void)setContentRating:(id)rating;	// 0x341d6b09
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x341d6b3d
// declared property setter: - (void)setSoftwareType:(id)type;	// 0x341d6b71
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x341d6ba5
// declared property setter: - (void)setVersionIdentifier:(id)identifier;	// 0x341d6bd9
// declared property setter: - (void)setVersionOrdering:(id)ordering;	// 0x341d6c0d
// declared property getter: - (id)softwareType;	// 0x341d6b61
// declared property getter: - (id)storeFrontIdentifier;	// 0x341d6b95
// declared property getter: - (id)versionIdentifier;	// 0x341d6bc9
// declared property getter: - (id)versionOrdering;	// 0x341d6bfd
@end
