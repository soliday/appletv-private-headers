/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSString, NSArray, NSURL, SAPersonAttribute, NSDate;

@interface SAEmailEmail : SADomainObject {
}
@property(copy, nonatomic) NSDate *dateSent;	// G=0x32f4a051; S=0x32f4a06d; 
@property(retain, nonatomic) SAPersonAttribute *fromEmail;	// G=0x32f4a0bd; S=0x32f4a111; 
@property(copy, nonatomic) NSString *message;	// G=0x32f4a14d; S=0x32f4a169; 
@property(retain, nonatomic) NSNumber *outgoing;	// G=0x32f4a1b9; S=0x32f4a1d5; 
@property(copy, nonatomic) NSArray *receivingAddresses;	// G=0x32f4a1f1; S=0x32f4a20d; 
@property(copy, nonatomic) NSArray *recipientsBcc;	// G=0x32f4a25d; S=0x32f4a2d9; 
@property(copy, nonatomic) NSArray *recipientsCc;	// G=0x32f4a341; S=0x32f4a3bd; 
@property(copy, nonatomic) NSArray *recipientsTo;	// G=0x32f4a425; S=0x32f4a4a1; 
@property(copy, nonatomic) NSURL *referenceId;	// G=0x32f4a509; S=0x32f4a585; 
@property(copy, nonatomic) NSString *subject;	// G=0x32f4a5e5; S=0x32f4a601; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x32f4a651; S=0x32f4a66d; 
@property(copy, nonatomic) NSString *type;	// G=0x32f4a6bd; S=0x32f4a6d9; 
+ (id)email;	// 0x32f49fc1
+ (id)emailWithDictionary:(id)dictionary context:(id)context;	// 0x32f4a005
// declared property getter: - (id)dateSent;	// 0x32f4a051
- (id)encodedClassName;	// 0x32f49fb5
// declared property getter: - (id)fromEmail;	// 0x32f4a0bd
- (id)groupIdentifier;	// 0x32f49fa5
// declared property getter: - (id)message;	// 0x32f4a14d
// declared property getter: - (id)outgoing;	// 0x32f4a1b9
// declared property getter: - (id)receivingAddresses;	// 0x32f4a1f1
// declared property getter: - (id)recipientsBcc;	// 0x32f4a25d
// declared property getter: - (id)recipientsCc;	// 0x32f4a341
// declared property getter: - (id)recipientsTo;	// 0x32f4a425
// declared property getter: - (id)referenceId;	// 0x32f4a509
// declared property setter: - (void)setDateSent:(id)sent;	// 0x32f4a06d
// declared property setter: - (void)setFromEmail:(id)email;	// 0x32f4a111
// declared property setter: - (void)setMessage:(id)message;	// 0x32f4a169
// declared property setter: - (void)setOutgoing:(id)outgoing;	// 0x32f4a1d5
// declared property setter: - (void)setReceivingAddresses:(id)addresses;	// 0x32f4a20d
// declared property setter: - (void)setRecipientsBcc:(id)bcc;	// 0x32f4a2d9
// declared property setter: - (void)setRecipientsCc:(id)cc;	// 0x32f4a3bd
// declared property setter: - (void)setRecipientsTo:(id)to;	// 0x32f4a4a1
// declared property setter: - (void)setReferenceId:(id)anId;	// 0x32f4a585
// declared property setter: - (void)setSubject:(id)subject;	// 0x32f4a601
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x32f4a66d
// declared property setter: - (void)setType:(id)type;	// 0x32f4a6d9
// declared property getter: - (id)subject;	// 0x32f4a5e5
// declared property getter: - (id)timeZoneId;	// 0x32f4a651
// declared property getter: - (id)type;	// 0x32f4a6bd
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f4a729
@end
