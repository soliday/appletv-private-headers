/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface CPAggregateDictionary : NSObject {
}
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30cb2759; 
+ (id)sharedAggregateDictionary;	// 0x30cb275d
- (void)addValue:(long long)value forKey:(id)key;	// 0x30cb26e5
- (void)clearDistributionKey:(id)key;	// 0x30cb2719
- (void)clearScalarKey:(id)key;	// 0x30cb2691
- (int)commit;	// 0x30cb2681
- (void)decrementKey:(id)key;	// 0x30cb26cd
- (void)incrementKey:(id)key;	// 0x30cb26b9
// declared property getter: - (BOOL)isEnabled;	// 0x30cb2759
- (void)pushValue:(double)value forKey:(id)key;	// 0x30cb2741
- (void)setValue:(double)value forDistributionKey:(id)distributionKey;	// 0x30cb2729
- (void)setValue:(long long)value forScalarKey:(id)scalarKey;	// 0x30cb26a1
- (void)significantTimeChanged;	// 0x30cb2671
- (void)subtractValue:(long long)value forKey:(id)key;	// 0x30cb26fd
@end

