/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PersistentStoreConfiguration : NSObject <NSCopying> {
@private
	NSString *_databaseFileName;	// 4 = 0x4
	NSArray *_legacyModelVersionIdentifiers;	// 8 = 0x8
	NSString *_modelFileName;	// 12 = 0xc
	int _storeType;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *databaseFileName;	// G=0x32b4c6c9; S=0x32b4c6d9; @synthesize=_databaseFileName
@property(readonly, assign, nonatomic) NSString *integrityCookieFileName;	// G=0x32b4c6a1; 
@property(copy, nonatomic) NSArray *legacyModelVersionIdentifiers;	// G=0x32b4c6fd; S=0x32b4c70d; @synthesize=_legacyModelVersionIdentifiers
@property(retain, nonatomic) NSString *modelFileName;	// G=0x32b4c731; S=0x32b4c741; @synthesize=_modelFileName
@property(assign, nonatomic) int storeType;	// G=0x32b4c765; S=0x32b4c775; @synthesize=_storeType
- (id)initWithStoreType:(int)storeType;	// 0x32b4c3b1
- (id)copyWithZone:(NSZone *)zone;	// 0x32b4c5dd
// declared property getter: - (id)databaseFileName;	// 0x32b4c6c9
- (void)dealloc;	// 0x32b4c569
// declared property getter: - (id)integrityCookieFileName;	// 0x32b4c6a1
// declared property getter: - (id)legacyModelVersionIdentifiers;	// 0x32b4c6fd
// declared property getter: - (id)modelFileName;	// 0x32b4c731
// declared property setter: - (void)setDatabaseFileName:(id)name;	// 0x32b4c6d9
// declared property setter: - (void)setLegacyModelVersionIdentifiers:(id)identifiers;	// 0x32b4c70d
// declared property setter: - (void)setModelFileName:(id)name;	// 0x32b4c741
// declared property setter: - (void)setStoreType:(int)type;	// 0x32b4c775
// declared property getter: - (int)storeType;	// 0x32b4c765
@end
