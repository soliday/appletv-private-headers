/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface DAMailMessage : NSObject <NSCoding> {
}
- (id)initWithCoder:(id)coder;	// 0x31eb79ed
- (id)attachments;	// 0x31eb7661
- (id)body;	// 0x31eb7651
- (int)bodySize;	// 0x31eb7655
- (int)bodyTruncated;	// 0x31eb7659
- (id)cc;	// 0x31eb762d
- (id)conversationId;	// 0x31eb7671
- (id)conversationIndex;	// 0x31eb7675
- (id)date;	// 0x31eb7639
- (id)displayTo;	// 0x31eb7641
- (void)encodeWithCoder:(id)coder;	// 0x31eb7a2d
- (BOOL)flagged;	// 0x31eb764d
- (BOOL)flaggedIsSet;	// 0x31eb768d
- (id)folderID;	// 0x31eb7681
- (id)from;	// 0x31eb7631
- (int)importance;	// 0x31eb7645
- (int)lastVerb;	// 0x31eb7685
- (id)longID;	// 0x31eb767d
- (id)meetingRequestMetaData;	// 0x31eb7669
- (id)meetingRequestUUID;	// 0x31eb7665
- (id)messageClass;	// 0x31eb765d
- (BOOL)read;	// 0x31eb7649
- (BOOL)readIsSet;	// 0x31eb7689
- (id)remoteID;	// 0x31eb7679
- (id)replyTo;	// 0x31eb7635
- (id)rfc822Data;	// 0x31eb7815
- (int)smimeType;	// 0x31eb7695
- (id)subject;	// 0x31eb763d
- (id)threadTopic;	// 0x31eb766d
- (id)to;	// 0x31eb7629
- (BOOL)verbIsSet;	// 0x31eb7691
@end

