/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSManagedObject.h> // Unknown library

@class NSString, NSData, NoteObject;

@interface NoteBodyObject : NSManagedObject {
}
@property(retain, nonatomic) NSString *content;	// @dynamic
@property(readonly, assign, nonatomic) NSString *contentAsPlainText;	// G=0x307568dd; 
@property(retain, nonatomic) NSString *externalContentRef;	// @dynamic
@property(retain, nonatomic) NSData *externalRepresentation;	// @dynamic
@property(retain, nonatomic) NoteObject *owner;	// @dynamic
// declared property getter: - (id)contentAsPlainText;	// 0x307568dd
- (id)contentAsPlainTextPreservingNewlines;	// 0x3075697d
@end

