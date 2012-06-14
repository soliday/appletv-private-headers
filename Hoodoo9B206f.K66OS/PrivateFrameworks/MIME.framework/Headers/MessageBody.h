/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class Message;

@interface MessageBody : NSObject {
	Message *_message;	// 4 = 0x4
}
@property(retain) Message *message;	// G=0x35e5ea65; S=0x35e5eafd; converted property
- (id)attachments;	// 0x35e5ebc1
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x35e5ea9d
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x35e5ea59
- (void)dealloc;	// 0x35e5ebe5
- (id)htmlContent;	// 0x35e5eae5
- (id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x35e5eac1
- (BOOL)isHTML;	// 0x35e5ea5d
- (BOOL)isRich;	// 0x35e5ea61
// converted property getter: - (id)message;	// 0x35e5ea65
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x35e5ea75
- (id)rawData;	// 0x35e5ea7d
// converted property setter: - (void)setMessage:(id)message;	// 0x35e5eafd
- (id)textHtmlPart;	// 0x35e5ea79
@end

