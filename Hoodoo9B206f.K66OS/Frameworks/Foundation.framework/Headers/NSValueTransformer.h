/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSValueTransformer : NSObject {
}
+ (id)_transformerRegistry;	// 0x31d2502d
+ (BOOL)allowsReverseTransformation;	// 0x31d93961
+ (void)setValueTransformer:(id)transformer forName:(id)name;	// 0x31d24f71
+ (Class)transformedValueClass;	// 0x31d9395d
+ (id)valueTransformerForName:(id)name;	// 0x31d25a9d
+ (id)valueTransformerNames;	// 0x31d938e1
- (id)reverseTransformedValue:(id)value;	// 0x31d93969
- (id)transformedValue:(id)value;	// 0x31d93965
@end

