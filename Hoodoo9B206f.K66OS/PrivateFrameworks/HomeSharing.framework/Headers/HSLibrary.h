/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library

@class HSConnection, NSString, SSAccount;
@protocol NSObject;

@interface HSLibrary : NSObject {
@private
	SSAccount *_account;	// 4 = 0x4
	HSConnection *_connection;	// 8 = 0x8
	id<NSObject> _context;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	BOOL _requiresPassword;	// 20 = 0x14
	NSString *_uniqueIdentifier;	// 24 = 0x18
	unsigned _version;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) HSConnection *connection;	// G=0x36d439a1; @synthesize=_connection
@property(retain, nonatomic) id<NSObject> context;	// G=0x36d439b1; S=0x36d439c1; @synthesize=_context
@property(readonly, assign, nonatomic) NSString *name;	// G=0x36d439e5; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL requiresPassword;	// G=0x36d439f5; @synthesize=_requiresPassword
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x36d43a05; @synthesize=_uniqueIdentifier
@property(readonly, assign, nonatomic) unsigned version;	// G=0x36d43a15; @synthesize=_version
- (id)initWithBaseURL:(id)baseURL forAccount:(id)account;	// 0x36d437dd
- (id)initWithName:(id)name uniqueIdentifier:(id)identifier version:(unsigned)version baseURL:(id)url;	// 0x36d43645
// declared property getter: - (id)connection;	// 0x36d439a1
// declared property getter: - (id)context;	// 0x36d439b1
- (void)dealloc;	// 0x36d43905
// declared property getter: - (id)name;	// 0x36d439e5
// declared property getter: - (BOOL)requiresPassword;	// 0x36d439f5
// declared property setter: - (void)setContext:(id)context;	// 0x36d439c1
// declared property getter: - (id)uniqueIdentifier;	// 0x36d43a05
// declared property getter: - (unsigned)version;	// 0x36d43a15
@end

