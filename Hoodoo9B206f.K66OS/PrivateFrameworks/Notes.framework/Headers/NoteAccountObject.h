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
@property(assign, nonatomic) int accountType;	// G=0x30f087d1; S=0x30f08781; 
@property(retain, nonatomic) NSDictionary *constraints;	// G=0x30f08875; S=0x30f08bc5; @synthesize=_constraints
@property(retain, nonatomic) NSString *constraintsPath;	// @dynamic
@property(retain, nonatomic) NoteStoreObject *defaultStore;	// @dynamic
@property(retain, nonatomic) NSString *name;	// @dynamic
@property(retain, nonatomic) NSString *pathToConstraintsPlist;	// G=0x30f08855; S=0x30f08815; 
@property(retain, nonatomic) NSSet *stores;	// @dynamic
@property(retain, nonatomic) NSNumber *type;	// @dynamic
- (void).cxx_destruct;	// 0x30f08c05
// declared property getter: - (int)accountType;	// 0x30f087d1
- (id)basicAccountIdentifier;	// 0x30f084a1
- (id)collectionInfo;	// 0x30f083d1
// declared property getter: - (id)constraints;	// 0x30f08875
- (void)didTurnIntoFault;	// 0x30f08b85
// declared property getter: - (id)pathToConstraintsPlist;	// 0x30f08855
- (id)predicateForNotes;	// 0x30f08365
// declared property setter: - (void)setAccountType:(int)type;	// 0x30f08781
// declared property setter: - (void)setConstraints:(id)constraints;	// 0x30f08bc5
// declared property setter: - (void)setPathToConstraintsPlist:(id)constraintsPlist;	// 0x30f08815
- (BOOL)shouldMarkNotesAsDeleted;	// 0x30f08999
- (id)storeForExternalId:(id)externalId;	// 0x30f084c1
- (BOOL)validateDefaultStore:(id *)store error:(id *)error;	// 0x30f08a39
@end

