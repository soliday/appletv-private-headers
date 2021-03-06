/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSNumber, NSArray, SSItemContentRating, NSString;

__attribute__((visibility("hidden")))
@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
@private
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
@property(retain, nonatomic) NSNumber *accountDSID;	// G=0x33344fd1; S=0x33344fe1; @synthesize=_accountDSID
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x33345005; S=0x33345015; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x33345039; S=0x33345049; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleShortVersionString;	// G=0x3334506d; S=0x3334507d; @synthesize=_bundleShortVersionString
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x333450a1; S=0x333450b1; @synthesize=_bundleVersion
@property(copy, nonatomic) NSString *containerPath;	// G=0x333450d5; S=0x333450e5; @synthesize=_containerPath
@property(copy, nonatomic) SSItemContentRating *contentRating;	// G=0x33345109; S=0x33345119; @synthesize=_contentRating
@property(retain, nonatomic) NSNumber *itemIdentifier;	// G=0x3334513d; S=0x3334514d; @synthesize=_itemIdentifier
@property(copy, nonatomic) NSString *softwareType;	// G=0x33345171; S=0x33345181; @synthesize=_softwareType
@property(retain, nonatomic) NSNumber *storeFrontIdentifier;	// G=0x333451a5; S=0x333451b5; @synthesize=_storeFrontIdentifier
@property(retain, nonatomic) NSNumber *versionIdentifier;	// G=0x333451d9; S=0x333451e9; @synthesize=_versionIdentifier
@property(copy, nonatomic) NSArray *versionOrdering;	// G=0x3334520d; S=0x3334521d; @synthesize=_versionOrdering
+ (id)lookupAttributeKeys;	// 0x333446e9
- (id)initWithMerchant:(id)merchant;	// 0x33344389
- (id)initWithMobileInstallationDictionary:(id)mobileInstallationDictionary;	// 0x33344145
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x333448e5
- (void)_loadMetadataFromContainer:(id)container;	// 0x33344b71
// declared property getter: - (id)accountDSID;	// 0x33344fd1
// declared property getter: - (id)accountIdentifier;	// 0x33345005
// declared property getter: - (id)bundleIdentifier;	// 0x33345039
// declared property getter: - (id)bundleShortVersionString;	// 0x3334506d
// declared property getter: - (id)bundleVersion;	// 0x333450a1
// declared property getter: - (id)containerPath;	// 0x333450d5
// declared property getter: - (id)contentRating;	// 0x33345109
- (void *)copyXPCEncoding;	// 0x33344765
- (void)dealloc;	// 0x3334451d
- (id)description;	// 0x33344645
// declared property getter: - (id)itemIdentifier;	// 0x3334513d
// declared property setter: - (void)setAccountDSID:(id)dsid;	// 0x33344fe1
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x33345015
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x33345049
// declared property setter: - (void)setBundleShortVersionString:(id)string;	// 0x3334507d
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x333450b1
// declared property setter: - (void)setContainerPath:(id)path;	// 0x333450e5
// declared property setter: - (void)setContentRating:(id)rating;	// 0x33345119
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x3334514d
// declared property setter: - (void)setSoftwareType:(id)type;	// 0x33345181
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x333451b5
// declared property setter: - (void)setVersionIdentifier:(id)identifier;	// 0x333451e9
// declared property setter: - (void)setVersionOrdering:(id)ordering;	// 0x3334521d
// declared property getter: - (id)softwareType;	// 0x33345171
// declared property getter: - (id)storeFrontIdentifier;	// 0x333451a5
// declared property getter: - (id)versionIdentifier;	// 0x333451d9
// declared property getter: - (id)versionOrdering;	// 0x3334520d
@end

