/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import "NoteCollectionObject.h"

@class NSDictionary, NSString, NSNumber, NSSet, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject {
	NSDictionary *_constraints;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *accountIdentifier;	// @dynamic
@property(assign, nonatomic) int accountType;	// G=0x30f0668d; S=0x30f06645; 
@property(retain, nonatomic) NSDictionary *constraints;	// G=0x30f0671d; S=0x30f0699d; @synthesize=_constraints
@property(retain, nonatomic) NSString *constraintsPath;	// @dynamic
@property(retain, nonatomic) NoteStoreObject *defaultStore;	// @dynamic
@property(retain, nonatomic) NSString *name;	// @dynamic
@property(retain, nonatomic) NSString *pathToConstraintsPlist;	// G=0x30f0670d; S=0x30f066c9; 
@property(retain, nonatomic) NSSet *stores;	// @dynamic
@property(retain, nonatomic) NSNumber *type;	// @dynamic
- (void).cxx_destruct;	// 0x30f069c1
// declared property getter: - (int)accountType;	// 0x30f0668d
- (id)basicAccountIdentifier;	// 0x30f063dd
- (id)collectionInfo;	// 0x30f06341
// declared property getter: - (id)constraints;	// 0x30f0671d
- (void)didTurnIntoFault;	// 0x30f06959
// declared property getter: - (id)pathToConstraintsPlist;	// 0x30f0670d
- (id)predicateForNotes;	// 0x30f062e1
// declared property setter: - (void)setAccountType:(int)type;	// 0x30f06645
// declared property setter: - (void)setConstraints:(id)constraints;	// 0x30f0699d
// declared property setter: - (void)setPathToConstraintsPlist:(id)constraintsPlist;	// 0x30f066c9
- (BOOL)shouldMarkNotesAsDeleted;	// 0x30f067e9
- (id)storeForExternalId:(id)externalId;	// 0x30f063ed
- (BOOL)validateDefaultStore:(id *)store error:(id *)error;	// 0x30f0687d
@end

