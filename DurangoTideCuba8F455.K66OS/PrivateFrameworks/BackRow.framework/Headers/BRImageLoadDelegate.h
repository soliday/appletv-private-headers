/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class BRImageManager, NSMutableData, BRImageLoadJob;

__attribute__((visibility("hidden")))
@interface BRImageLoadDelegate : NSObject {
@private
	BRImageManager *_manager;	// 4 = 0x4
	BRImageLoadJob *_job;	// 8 = 0x8
	NSMutableData *_data;	// 12 = 0xc
}
@property(readonly, retain) BRImageLoadJob *job;	// G=0x32f263fd; converted property
+ (id)imageLoadDelegateForManager:(id)manager withJob:(id)job;	// 0x32fd0e8d
- (id)initForManager:(id)manager withJob:(id)job;	// 0x32fd21fd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x32fd3d25
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x32f26099
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x32f26049
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x32fd0dcd
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x32fd0dc9
- (void)connectionDidFinishLoading:(id)connection;	// 0x32f260d5
- (id)content;	// 0x32f263ed
- (void)dealloc;	// 0x32f265b5
// converted property getter: - (id)job;	// 0x32f263fd
@end
