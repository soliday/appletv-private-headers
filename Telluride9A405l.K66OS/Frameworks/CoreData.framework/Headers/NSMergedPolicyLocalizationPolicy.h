/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSValidationErrorLocalizationPolicy.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
@private
	NSSet *_mergedPolicies;	// 24 = 0x18
}
- (id)init;	// 0x3401dc75
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x3401dcb5
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x3401de25
- (void)addPolicy:(id)policy;	// 0x3401df81
- (id)copyWithZone:(NSZone *)zone;	// 0x3401dff1
- (void)dealloc;	// 0x3401e049
@end

