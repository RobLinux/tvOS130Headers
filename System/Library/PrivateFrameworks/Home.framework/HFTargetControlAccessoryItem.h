/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <Home/HFServiceLikeItem.h>
#import <Home/HFServiceLikeBuilderCreating.h>

@protocol HFCharacteristicValueSource;
@class HMAccessory, NSString, NSSet;

@interface HFTargetControlAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating> {

	HMAccessory* _accessory;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,retain) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) NSSet * services; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSSet *)services;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 valueSource:(id)arg2 ;
-(id<HFHomeKitObject>)homeKitObject;
-(BOOL)shouldReduceOptionItemsForNotifyingCharacteristics;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)iconDescriptor;
@end

