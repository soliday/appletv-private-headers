/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSURLConnection, NSDate, NSDictionary, NSString;
@protocol BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRImageLoadJob : NSObject {
@private
	NSString *_imageName;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	NSDictionary *_headerFields;	// 12 = 0xc
	NSURLConnection *_connection;	// 16 = 0x10
	NSDate *_requestDate;	// 20 = 0x14
	BOOL _writeImage;	// 24 = 0x18
	id<BRMusicStoreImageDecryptionAgent> _decryptionAgent;	// 28 = 0x1c
}
@property(retain) NSURLConnection *connection;	// G=0x32aab5c1; S=0x32aab5d1; converted property
@property(readonly, retain) NSDictionary *headerFields;	// G=0x32aab5b1; converted property
@property(readonly, retain) NSDate *requestDate;	// G=0x32aab611; converted property
@property(readonly, retain) NSURL *url;	// G=0x32aab591; converted property
@property(readonly, assign) BOOL writeImage;	// G=0x32aab621; converted property
- (id)initWithName:(id)name url:(id)url headerFields:(id)fields decryptionAgent:(id)agent writeImage:(BOOL)image;	// 0x32aab3e5
// converted property getter: - (id)connection;	// 0x32aab5c1
- (void)dealloc;	// 0x32aab4d1
- (id)decryptionAgent;	// 0x32aab5a1
// converted property getter: - (id)headerFields;	// 0x32aab5b1
- (id)name;	// 0x32aab581
// converted property getter: - (id)requestDate;	// 0x32aab611
// converted property setter: - (void)setConnection:(id)connection;	// 0x32aab5d1
// converted property getter: - (id)url;	// 0x32aab591
// converted property getter: - (BOOL)writeImage;	// 0x32aab621
@end

