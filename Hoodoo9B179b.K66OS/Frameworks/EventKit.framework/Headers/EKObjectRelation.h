/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKObject, NSString;

__attribute__((visibility("hidden")))
@interface EKObjectRelation : NSObject {
@private
	EKObject *_owner;	// 4 = 0x4
	NSString *_relationName;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	BOOL _loaded;	// 13 = 0xd
	NSString *_inverseName;	// 16 = 0x10
}
@property(readonly, assign, getter=isDirty) BOOL dirty;	// G=0x30bff025; converted property
@property(readonly, assign, nonatomic) NSString *inverseName;	// G=0x30c08841; @synthesize=_inverseName
@property(readonly, assign, nonatomic) EKObject *owner;	// G=0x30c09c0d; @synthesize=_owner
@property(readonly, assign, nonatomic) NSString *relationName;	// G=0x30c09b6d; @synthesize=_relationName
- (id)initWithOwner:(id)owner relationName:(id)name inverseRelationName:(id)name3;	// 0x30bfe2b1
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30c68cf1
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30c68cf5
- (id)committedValue;	// 0x30c68cc9
- (void)dealloc;	// 0x30c108c5
- (void)didCommit;	// 0x30c0fee5
// declared property getter: - (id)inverseName;	// 0x30c08841
// converted property getter: - (BOOL)isDirty;	// 0x30bff025
- (BOOL)isWeak;	// 0x30c68c69
// declared property getter: - (id)owner;	// 0x30c09c0d
- (void)refresh;	// 0x30c68cc1
- (void)relatedObjectDidChange;	// 0x30c09c41
// declared property getter: - (id)relationName;	// 0x30c09b6d
- (void)reset;	// 0x30c68ca1
- (void)rollback;	// 0x30c07afd
- (void)updatePersistentObject;	// 0x30c68c9d
- (BOOL)validate:(id *)validate;	// 0x30c68cc5
@end
