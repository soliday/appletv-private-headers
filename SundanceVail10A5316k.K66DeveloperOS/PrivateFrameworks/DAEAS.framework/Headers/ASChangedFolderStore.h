/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray, NSString;

@interface ASChangedFolderStore : ASItem {
	NSMutableArray *_updatedFolders;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_syncKey;	// 48 = 0x30
}
@property(retain) NSNumber *status;	// G=0x3096916d; S=0x30969181; @synthesize=_status
@property(retain) NSString *syncKey;	// G=0x30969191; S=0x309691a5; @synthesize=_syncKey
@property(retain) NSArray *updatedFolders;	// G=0x309691b5; S=0x309691c9; @synthesize=_updatedFolders
+ (BOOL)acceptsTopLevelLeaves;	// 0x309689a5
+ (id)asParseRules;	// 0x30968c29
+ (BOOL)frontingBasicTypes;	// 0x30968aa1
+ (BOOL)notifyOfUnknownTokens;	// 0x30968af5
+ (BOOL)parsingLeafNode;	// 0x309689f9
+ (BOOL)parsingWithSubItems;	// 0x30968a4d
- (void)dealloc;	// 0x30968b49
- (id)description;	// 0x30968bc1
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x30969075
// declared property setter: - (void)setStatus:(id)status;	// 0x30969181
// declared property setter: - (void)setSyncKey:(id)key;	// 0x309691a5
// declared property setter: - (void)setUpdatedFolders:(id)folders;	// 0x309691c9
// declared property getter: - (id)status;	// 0x3096916d
// declared property getter: - (id)syncKey;	// 0x30969191
// declared property getter: - (id)updatedFolders;	// 0x309691b5
@end
