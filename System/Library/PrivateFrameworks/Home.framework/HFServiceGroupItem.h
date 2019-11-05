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
#import <Home/HFActionBuilderFactory.h>
#import <Home/HFServiceLikeBuilderCreating.h>
#import <Home/HFGroupableItemProtocol.h>

@protocol HFCharacteristicValueSource;
@class HMServiceGroup, NSString, NSSet;

@interface HFServiceGroupItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol> {

	id<HFCharacteristicValueSource> _valueSource;
	HMServiceGroup* _serviceGroup;

}

@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;                       //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMServiceGroup * serviceGroup;                                     //@synthesize serviceGroup=_serviceGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) BOOL isItemGroup; 
@property (nonatomic,readonly) BOOL isContainedWithinItemGroup; 
@property (nonatomic,readonly) unsigned long long numberOfItemsContainedWithinGroup; 
+(BOOL)_isControlItem:(id)arg1 similarToControlItem:(id)arg2 ;
+(BOOL)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2 ;
+(id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSSet *)services;
-(id)accessories;
-(HMServiceGroup *)serviceGroup;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(BOOL)isItemGroup;
-(BOOL)isContainedWithinItemGroup;
-(unsigned long long)numberOfItemsContainedWithinGroup;
-(BOOL)actionsMayRequireDeviceUnlock;
-(id)primaryStateControlItem;
-(id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2 ;
-(id)_buildServiceItems;
-(id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(/*^block*/id)arg2 ;
-(id)_sortDescriptorsForServiceItems;
-(id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(id)controlPanelItems;
-(id)_buildControlItemsForServiceItems:(id)arg1 ;
-(id)_mergedIconDescriptorForServiceItems:(id)arg1 ;
-(id)_aggregatedValueSource;
-(id)incrementalStateControlItem;
-(id)allControlItems;
-(double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(long long)_highestIntegerValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
@end

