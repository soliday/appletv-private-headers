/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ISDialog, NSString, ISOperation;

__attribute__((visibility("hidden")))
@interface PurchaseResponseInfo : NSObject {
@private
	ISDialog *_dialog;	// 4 = 0x4
	NSString *_changedBuyParameters;	// 8 = 0x8
	ISOperation *_intermediateOperation;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *changedBuyParameters;	// G=0x32b4e361; S=0x32b4e371; @synthesize=_changedBuyParameters
@property(retain, nonatomic) ISDialog *dialog;	// G=0x32b4e32d; S=0x32b4e33d; @synthesize=_dialog
@property(retain, nonatomic) ISOperation *intermediateOperation;	// G=0x32b4e395; S=0x32b4e3a5; @synthesize=_intermediateOperation
// declared property getter: - (id)changedBuyParameters;	// 0x32b4e361
- (void)dealloc;	// 0x32b4e251
// declared property getter: - (id)dialog;	// 0x32b4e32d
// declared property getter: - (id)intermediateOperation;	// 0x32b4e395
- (void)reset;	// 0x32b4e2e5
// declared property setter: - (void)setChangedBuyParameters:(id)parameters;	// 0x32b4e371
// declared property setter: - (void)setDialog:(id)dialog;	// 0x32b4e33d
// declared property setter: - (void)setIntermediateOperation:(id)operation;	// 0x32b4e3a5
@end

