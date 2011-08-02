/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSMutableArray, NSString;

@interface ASChangedFolderStore : ASItem {
	NSMutableArray *_updatedFolders;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_syncKey;	// 48 = 0x30
}
@property(retain) NSNumber *status;	// G=0x3435997d; S=0x34359941; converted property
@property(retain) NSString *syncKey;	// G=0x343595c9; S=0x34359d29; converted property
@property(retain) NSMutableArray *updatedFolders;	// G=0x343599e9; S=0x343599ad; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x34359e85
+ (BOOL)frontingBasicTypes;	// 0x34359dad
+ (BOOL)notifyOfUnknownTokens;	// 0x34359d65
+ (BOOL)parsingLeafNode;	// 0x34359e3d
+ (BOOL)parsingWithSubItems;	// 0x34359df5
- (id)asParseRules;	// 0x34359a19
- (void)dealloc;	// 0x34359f81
- (id)description;	// 0x34359f15
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x34359fed
// converted property setter: - (void)setStatus:(id)status;	// 0x34359941
// converted property setter: - (void)setSyncKey:(id)key;	// 0x34359d29
// converted property setter: - (void)setUpdatedFolders:(id)folders;	// 0x343599ad
// converted property getter: - (id)status;	// 0x3435997d
// converted property getter: - (id)syncKey;	// 0x343595c9
// converted property getter: - (id)updatedFolders;	// 0x343599e9
@end
