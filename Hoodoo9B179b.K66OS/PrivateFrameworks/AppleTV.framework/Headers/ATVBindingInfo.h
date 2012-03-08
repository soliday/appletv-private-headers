/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVBindingInfo : NSObject {
@private
	id _observedObject;	// 4 = 0x4
	NSString *_observedKeyPath;	// 8 = 0x8
	NSDictionary *_bindingOptions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDictionary *bindingOptions;	// G=0x303e16b1; @synthesize=_bindingOptions
@property(readonly, assign, nonatomic) NSString *observedKeyPath;	// G=0x303e16a1; @synthesize=_observedKeyPath
@property(readonly, assign, nonatomic) id observedObject;	// G=0x303e1691; @synthesize=_observedObject
- (id)initWithObservedObject:(id)observedObject observedKeyPath:(id)path bindingOptions:(id)options;	// 0x303e1595
- (id)_modelKeyPath;	// 0x303e168d
// declared property getter: - (id)bindingOptions;	// 0x303e16b1
- (void)dealloc;	// 0x303e161d
// declared property getter: - (id)observedKeyPath;	// 0x303e16a1
// declared property getter: - (id)observedObject;	// 0x303e1691
@end
