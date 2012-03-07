/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BRApplianceInfo : NSObject {
@private
	NSMutableDictionary *_info;	// 4 = 0x4
}
@property(retain) id applianceCategoryDescriptors;	// G=0x35dacba9; S=0x35dacb59; converted property
@property(retain) id dataSourceType;	// G=0x35dac9ad; S=0x35dac985; converted property
@property(assign) BOOL hideIfNoCategories;	// G=0x35dacc25; S=0x35dacbd1; converted property
@property(assign) float iconHorizontalOffset;	// G=0x35dac7a1; S=0x35dac74d; converted property
@property(assign) float iconKerningFactor;	// G=0x35dac835; S=0x35dac7e1; converted property
@property(retain) id iconPath;	// G=0x35dac6e9; S=0x35dac6c1; converted property
@property(assign) float iconReflectionOffset;	// G=0x35dac8c9; S=0x35dac875; converted property
@property(assign) BOOL isRemoteAppliance;	// G=0x35daccc1; S=0x35dacc6d; converted property
@property(retain) id key;	// G=0x35dac649; S=0x35dac621; converted property
@property(retain) id name;	// G=0x35dac699; S=0x35dac671; converted property
@property(assign) float preferredOrder;	// G=0x35daca29; S=0x35dac9d5; converted property
@property(assign) BOOL primaryAppliance;	// G=0x35dac5e1; S=0x35dac58d; converted property
@property(retain) id principalClassName;	// G=0x35dacb31; S=0x35dacb09; converted property
@property(retain) id requiredRemoteMediaTypes;	// G=0x35dacae1; S=0x35dacab9; converted property
@property(retain) id supportedMediaTypes;	// G=0x35daca91; S=0x35daca69; converted property
+ (id)infoForApplianceBundle:(id)applianceBundle;	// 0x35dac31d
- (id)init;	// 0x35dac295
- (id)initWithDictionary:(id)dictionary;	// 0x35dac23d
// converted property getter: - (id)applianceCategoryDescriptors;	// 0x35dacba9
- (BOOL)appliesToMediaHost:(id)mediaHost;	// 0x35dac909
// converted property getter: - (id)dataSourceType;	// 0x35dac9ad
- (void)dealloc;	// 0x35dac2d1
// converted property getter: - (BOOL)hideIfNoCategories;	// 0x35dacc25
- (id)icon;	// 0x35dac711
// converted property getter: - (float)iconHorizontalOffset;	// 0x35dac7a1
// converted property getter: - (float)iconKerningFactor;	// 0x35dac835
// converted property getter: - (id)iconPath;	// 0x35dac6e9
// converted property getter: - (float)iconReflectionOffset;	// 0x35dac8c9
// converted property getter: - (BOOL)isRemoteAppliance;	// 0x35daccc1
// converted property getter: - (id)key;	// 0x35dac649
// converted property getter: - (id)name;	// 0x35dac699
// converted property getter: - (float)preferredOrder;	// 0x35daca29
// converted property getter: - (BOOL)primaryAppliance;	// 0x35dac5e1
// converted property getter: - (id)principalClassName;	// 0x35dacb31
// converted property getter: - (id)requiredRemoteMediaTypes;	// 0x35dacae1
// converted property setter: - (void)setApplianceCategoryDescriptors:(id)descriptors;	// 0x35dacb59
// converted property setter: - (void)setDataSourceType:(id)type;	// 0x35dac985
// converted property setter: - (void)setHideIfNoCategories:(BOOL)categories;	// 0x35dacbd1
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x35dac74d
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x35dac7e1
// converted property setter: - (void)setIconPath:(id)path;	// 0x35dac6c1
// converted property setter: - (void)setIconReflectionOffset:(float)offset;	// 0x35dac875
// converted property setter: - (void)setIsRemoteAppliance:(BOOL)appliance;	// 0x35dacc6d
// converted property setter: - (void)setKey:(id)key;	// 0x35dac621
// converted property setter: - (void)setName:(id)name;	// 0x35dac671
// converted property setter: - (void)setPreferredOrder:(float)order;	// 0x35dac9d5
// converted property setter: - (void)setPrimaryAppliance:(BOOL)appliance;	// 0x35dac58d
// converted property setter: - (void)setPrincipalClassName:(id)name;	// 0x35dacb09
// converted property setter: - (void)setRequiredRemoteMediaTypes:(id)types;	// 0x35dacab9
// converted property setter: - (void)setSupportedMediaTypes:(id)types;	// 0x35daca69
// converted property getter: - (id)supportedMediaTypes;	// 0x35daca91
@end
