/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSManagedObject.h> // Unknown library

@class NSDate, NSString, NSURL, NSNumber, NSData, NoteStoreObject, NoteBodyObject;

@interface NoteObject : NSManagedObject {
}
@property(retain, nonatomic) NSString *author;	// @dynamic
@property(retain, nonatomic) NoteBodyObject *body;	// @dynamic
@property(retain, nonatomic) NSNumber *containsCJK;	// @dynamic
@property(retain, nonatomic) NSString *content;	// G=0x307556dd; S=0x30755689; 
@property(readonly, assign, nonatomic) NSString *contentAsPlainText;	// G=0x3075572d; 
@property(retain, nonatomic) NSNumber *contentType;	// @dynamic
@property(retain, nonatomic) NSDate *creationDate;	// @dynamic
@property(retain, nonatomic) NSNumber *deletedFlag;	// @dynamic
@property(retain, nonatomic) NSString *externalContentRef;	// G=0x30755c91; S=0x30755ce1; 
@property(retain, nonatomic) NSNumber *externalFlags;	// @dynamic
@property(retain, nonatomic) NSData *externalRepresentation;	// G=0x30755bed; S=0x30755c3d; 
@property(retain, nonatomic) NSNumber *externalServerIntId;	// @dynamic
@property(assign, nonatomic) unsigned long long flags;	// G=0x30755a65; S=0x30755a09; 
@property(retain, nonatomic) NSString *guid;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasValidServerIntId;	// G=0x30755b51; 
@property(retain, nonatomic) NSNumber *integerId;	// @dynamic
@property(retain, nonatomic) NSNumber *isBookkeepingEntry;	// @dynamic
@property(readonly, assign, nonatomic) BOOL isMarkedForDeletion;	// G=0x3075596d; 
@property(assign, nonatomic) BOOL isPlainText;	// G=0x307558d1; S=0x30755831; 
@property(retain, nonatomic) NSDate *modificationDate;	// @dynamic
@property(readonly, assign, nonatomic) NSURL *noteId;	// G=0x307559b9; 
@property(retain, nonatomic) NSString *serverId;	// @dynamic
@property(assign, nonatomic) long long serverIntId;	// G=0x30755b09; S=0x30755aad; 
@property(retain, nonatomic) NoteStoreObject *store;	// @dynamic
@property(retain, nonatomic) NSString *summary;	// @dynamic
@property(retain, nonatomic) NSString *title;	// @dynamic
// declared property getter: - (id)content;	// 0x307556dd
// declared property getter: - (id)contentAsPlainText;	// 0x3075572d
- (id)contentAsPlainTextPreservingNewlines;	// 0x3075577d
// declared property getter: - (id)externalContentRef;	// 0x30755c91
// declared property getter: - (id)externalRepresentation;	// 0x30755bed
// declared property getter: - (unsigned long long)flags;	// 0x30755a65
// declared property getter: - (BOOL)hasValidServerIntId;	// 0x30755b51
// declared property getter: - (BOOL)isMarkedForDeletion;	// 0x3075596d
// declared property getter: - (BOOL)isPlainText;	// 0x307558d1
- (void)markForDeletion;	// 0x30755921
// declared property getter: - (id)noteId;	// 0x307559b9
// declared property getter: - (long long)serverIntId;	// 0x30755b09
// declared property setter: - (void)setContent:(id)content;	// 0x30755689
// declared property setter: - (void)setExternalContentRef:(id)ref;	// 0x30755ce1
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x30755c3d
// declared property setter: - (void)setFlags:(unsigned long long)flags;	// 0x30755a09
// declared property setter: - (void)setIsPlainText:(BOOL)text;	// 0x30755831
// declared property setter: - (void)setServerIntId:(long long)anId;	// 0x30755aad
@end

