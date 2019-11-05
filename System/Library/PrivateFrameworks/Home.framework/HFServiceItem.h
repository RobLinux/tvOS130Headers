/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <Home/HFServiceLikeItem.h>
#import <Home/HFActionBuilderFactory.h>
#import <Home/HFServiceLikeBuilderCreating.h>
#import <Home/HFNamingComponentCreating.h>

@protocol HFCharacteristicValueSource;
@class HMService, NSString, NSSet;

@interface HFServiceItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFNamingComponentCreating> {

	id<HFCharacteristicValueSource> _valueSource;
	HMService* _service;

}

@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMService * service;                                      //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) NSSet * services; 
+(id)supportedServiceTypes;
+(id)serviceItemForService:(id)arg1 valueSource:(id)arg2 ;
+(Class)itemClassForService:(id)arg1 ;
+(id)_serviceTypeToServiceItemClassMap;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(HMService *)service;
-(NSSet *)services;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)controlItemValueSourceForPrimaryService;
-(id)performStandardUpdateWithCharacteristicTypes:(id)arg1 options:(id)arg2 ;
-(id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2 ;
-(id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2 ;
-(id)createControlItems;
-(id)servicesToReadForCharacteristicType:(id)arg1 ;
-(id)controlItemValueSourceForServices:(id)arg1 ;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(id)initWithValueSource:(id)arg1 service:(id)arg2 ;
-(id)_descriptionBuilder;
-(id)_allRepresentedServices;
-(id)_actionableCharacteristics;
-(id)characteristicsToReadForCharacteristicTypes:(id)arg1 controlItems:(id)arg2 ;
-(id)_augmentedStandardResultsForUpdateResponse:(id)arg1 controlItems:(id)arg2 ;
-(id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2 ;
@end

