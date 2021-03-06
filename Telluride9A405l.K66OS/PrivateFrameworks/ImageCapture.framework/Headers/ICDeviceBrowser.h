/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject {
@private
	id _privateData;	// 4 = 0x4
}
@property(readonly, assign, getter=isBrowsing) BOOL browsing;	// G=0x3700279d; 
@property(assign) id<ICDeviceBrowserDelegate> delegate;	// G=0x37002759; S=0x37002779; 
@property(readonly, assign) NSArray *devices;	// G=0x37002835; 
- (id)init;	// 0x37002985
- (void)dealloc;	// 0x37002b69
// declared property getter: - (id)delegate;	// 0x37002759
// declared property getter: - (id)devices;	// 0x37002835
- (void)finalize;	// 0x37002b15
- (id)internalDevices;	// 0x37002881
// declared property getter: - (BOOL)isBrowsing;	// 0x3700279d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37002779
- (int)start;	// 0x37002a45
- (void)stop;	// 0x370027c1
@end

