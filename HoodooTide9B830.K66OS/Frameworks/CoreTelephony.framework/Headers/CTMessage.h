/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSDate, NSString, NSMutableDictionary, NSArray, CTPhoneNumber, NSMutableArray;
@protocol NSCopying, CTMessageAddress;

@interface CTMessage : NSObject {
	NSObject<NSCopying, CTMessageAddress> *_sender;	// 4 = 0x4
	NSMutableArray *_recipients;	// 8 = 0x8
	NSMutableArray *_items;	// 12 = 0xc
	NSDictionary *_rawHeaders;	// 16 = 0x10
	NSDate *_date;	// 20 = 0x14
	unsigned _messageId;	// 24 = 0x18
	int _messageType;	// 28 = 0x1c
	CTPhoneNumber *_serviceCenter;	// 32 = 0x20
	NSString *_subject;	// 36 = 0x24
	NSString *_contentType;	// 40 = 0x28
	NSMutableDictionary *_contentTypeParams;	// 44 = 0x2c
	unsigned _replaceMessage;	// 48 = 0x30
	NSString *_countryCode;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *contentType;	// G=0x347cc5c5; S=0x347cc5d5; @synthesize=_contentType
@property(readonly, assign, nonatomic) NSString *countryCode;	// G=0x347cc609; @synthesize=_countryCode
@property(readonly, assign) NSDate *date;	// G=0x347cc4b9; @synthesize=_date
@property(readonly, assign) NSArray *items;	// G=0x347cc4e9; @synthesize=_items
@property(assign, nonatomic) unsigned messageId;	// G=0x347cc4c9; S=0x347cc4d9; @synthesize=_messageId
@property(assign, nonatomic) int messageType;	// G=0x347cc4f9; S=0x347cc509; @synthesize=_messageType
@property(readonly, assign) NSDictionary *rawHeaders;	// G=0x347cc5b5; @synthesize=_rawHeaders
@property(readonly, assign) NSArray *recipients;	// G=0x347cc4a9; @synthesize=_recipients
@property(readonly, assign) unsigned replaceMessage;	// G=0x347cc5f9; @synthesize=_replaceMessage
@property(copy, nonatomic) NSObject<NSCopying, CTMessageAddress> *sender;	// G=0x347cc581; S=0x347cc591; @synthesize=_sender
@property(copy, nonatomic) CTPhoneNumber *serviceCenter;	// G=0x347cc519; S=0x347cc529; @synthesize=_serviceCenter
@property(copy, nonatomic) NSString *subject;	// G=0x347cc54d; S=0x347cc55d; @synthesize=_subject
- (id)init;	// 0x347cbb59
- (id)initWithDate:(id)date;	// 0x347cbcb1
- (void)addContentTypeParameterWithName:(id)name value:(id)value;	// 0x347cc2d1
- (id)addData:(id)data withContentType:(id)contentType;	// 0x347cc1cd
- (void)addEmailRecipient:(id)recipient;	// 0x347cc0c1
- (id)addPart:(id)part;	// 0x347cc241
- (void)addPhoneRecipient:(id)recipient;	// 0x347cc071
- (void)addRecipient:(id)recipient;	// 0x347cbe59
- (id)addText:(id)text;	// 0x347cc13d
- (id)allContentTypeParameterNames;	// 0x347cc305
// declared property getter: - (id)contentType;	// 0x347cc5c5
- (id)contentTypeParameterWithName:(id)name;	// 0x347cc2b1
// declared property getter: - (id)countryCode;	// 0x347cc609
// declared property getter: - (id)date;	// 0x347cc4b9
- (void)dealloc;	// 0x347cbd05
- (id)description;	// 0x347cc325
// declared property getter: - (id)items;	// 0x347cc4e9
// declared property getter: - (unsigned)messageId;	// 0x347cc4c9
// declared property getter: - (int)messageType;	// 0x347cc4f9
// declared property getter: - (id)rawHeaders;	// 0x347cc5b5
// declared property getter: - (id)recipients;	// 0x347cc4a9
- (void)removePartAtIndex:(unsigned)index;	// 0x347cc26d
- (void)removeRecipient:(id)recipient;	// 0x347cbf51
- (void)removeRecipientsInArray:(id)array;	// 0x347cbf99
// declared property getter: - (unsigned)replaceMessage;	// 0x347cc5f9
// declared property getter: - (id)sender;	// 0x347cc581
// declared property getter: - (id)serviceCenter;	// 0x347cc519
// declared property setter: - (void)setContentType:(id)type;	// 0x347cc5d5
- (void)setCountryCode:(id)code;	// 0x347cc469
// declared property setter: - (void)setMessageId:(unsigned)anId;	// 0x347cc4d9
// declared property setter: - (void)setMessageType:(int)type;	// 0x347cc509
- (void)setRawHeaders:(id)headers;	// 0x347cbe05
- (void)setRecipient:(id)recipient;	// 0x347cbfc5
- (void)setRecipients:(id)recipients;	// 0x347cc02d
- (void)setReplaceMessage:(unsigned)message;	// 0x347cbe49
// declared property setter: - (void)setSender:(id)sender;	// 0x347cc591
// declared property setter: - (void)setServiceCenter:(id)center;	// 0x347cc529
// declared property setter: - (void)setSubject:(id)subject;	// 0x347cc55d
// declared property getter: - (id)subject;	// 0x347cc54d
@end

