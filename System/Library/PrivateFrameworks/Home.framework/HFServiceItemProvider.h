/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMHome, NSMutableSet, NSArray;

@interface HFServiceItemProvider : HFItemProvider {

	HMHome* _home;
	/*^block*/id _filter;
	/*^block*/id _sourceServiceGenerator;
	NSMutableSet* _serviceItems;
	NSArray* _serviceTypes;
	id<HFCharacteristicValueSource> _overrideValueSource;

}

@property (nonatomic,retain) NSMutableSet * serviceItems;                                      //@synthesize serviceItems=_serviceItems - In the implementation block
@property (nonatomic,retain) NSArray * serviceTypes;                                           //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> overrideValueSource;              //@synthesize overrideValueSource=_overrideValueSource - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id sourceServiceGenerator;                                          //@synthesize sourceServiceGenerator=_sourceServiceGenerator - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource; 
+(id)standardServices;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 ;
-(NSArray *)serviceTypes;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(id)reloadItems;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(void)setServiceItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)serviceItems;
-(id)initWithHome:(id)arg1 serviceTypes:(id)arg2 ;
-(id)sourceServiceGenerator;
-(void)setSourceServiceGenerator:(id)arg1 ;
-(void)setServiceTypes:(NSArray *)arg1 ;
@end

