/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@protocol NSObject;

@interface DAAction : NSObject <NSCoding> {
	int _itemChangeType;	// 4 = 0x4
	id _serverId;	// 8 = 0x8
	id<NSObject, NSCoding> _changedItem;	// 12 = 0xc
	int _changeId;	// 16 = 0x10
}
@property(assign) int changeId;	// G=0x3258b075; S=0x3258b085; @synthesize=_changeId
@property(retain, nonatomic) id changedItem;	// G=0x3258b055; @synthesize=_changedItem
@property(readonly, assign) int itemChangeType;	// G=0x3258b045; @synthesize=_itemChangeType
@property(readonly, assign, nonatomic) id serverId;	// G=0x3258b065; @synthesize=_serverId
- (id)initWithCoder:(id)coder;	// 0x3258ac85
- (id)initWithItemChangeType:(int)itemChangeType changedItem:(id)item serverId:(id)anId;	// 0x3258aa41
- (void)_setChangedItem:(id)item;	// 0x3258aad9
// declared property getter: - (int)changeId;	// 0x3258b075
// declared property getter: - (id)changedItem;	// 0x3258b055
- (ASContact *)contact;	// 0x32587881
- (void)dealloc;	// 0x3258a9e1
- (id)deletedContactID;	// 0x3258786d
- (id)deletedEventID;	// 0x32587839
- (id)deletedToDoID;	// 0x3259164d
- (id)description;	// 0x3258aba5
- (void)encodeWithCoder:(id)coder;	// 0x3258adfd
- (ASEvent *)event;	// 0x3258784d
- (unsigned)hash;	// 0x3258af35
- (BOOL)isEqual:(id)equal;	// 0x3258af75
// declared property getter: - (int)itemChangeType;	// 0x3258b045
- (id)message;	// 0x3258fa6d
// declared property getter: - (id)serverId;	// 0x3258b065
// declared property setter: - (void)setChangeId:(int)anId;	// 0x3258b085
- (id)stringForItemChangeType:(int)itemChangeType;	// 0x3258ab1d
- (ASToDo *)toDo;	// 0x32591661
@end

