/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAMailMessage.h> // Unknown library

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
	ASEmailItem *_ASEmailItem;	// 4 = 0x4
}
- (id)initWithASEmailItem:(id)asemailItem;	// 0x3189e599
- (id)initWithCoder:(id)coder;	// 0x3189ed21
- (id)attachments;	// 0x3189eaa5
- (id)body;	// 0x3189e9d5
- (int)bodySize;	// 0x3189e9f5
- (int)bodyTruncated;	// 0x3189ea61
- (id)cc;	// 0x3189e8ad
- (id)conversationId;	// 0x3189eb25
- (id)conversationIndex;	// 0x3189eb45
- (id)date;	// 0x3189e90d
- (void)dealloc;	// 0x3189e54d
- (id)description;	// 0x3189e5ed
- (id)displayTo;	// 0x3189e94d
- (void)encodeWithCoder:(id)coder;	// 0x3189ee21
- (BOOL)flagged;	// 0x3189e9b1
- (BOOL)flaggedIsSet;	// 0x3189ec09
- (id)folderID;	// 0x3189eba5
- (id)from;	// 0x3189e8cd
- (int)importance;	// 0x3189e96d
- (int)lastVerb;	// 0x3189ebc5
- (id)longID;	// 0x3189eb85
- (id)meetingRequestMetaData;	// 0x3189eae5
- (id)meetingRequestUUID;	// 0x3189eac5
- (id)messageClass;	// 0x3189ea85
- (BOOL)read;	// 0x3189e98d
- (BOOL)readIsSet;	// 0x3189ebe5
- (id)remoteID;	// 0x3189eb65
- (id)replyTo;	// 0x3189e8ed
- (id)rfc822Data;	// 0x3189ecbd
- (int)smimeType;	// 0x3189ec51
- (id)subject;	// 0x3189e92d
- (id)threadTopic;	// 0x3189eb05
- (id)to;	// 0x3189e88d
- (BOOL)verbIsSet;	// 0x3189ec2d
@end

