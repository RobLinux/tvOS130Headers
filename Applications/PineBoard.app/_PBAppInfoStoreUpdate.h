/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface _PBAppInfoStoreUpdate : NSObject {

	long long _updateType;
	NSSet* _applicationInfos;
	NSSet* _placeholders;

}

@property (nonatomic,readonly) long long updateType;                       //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,copy,readonly) NSSet * applicationInfos;              //@synthesize applicationInfos=_applicationInfos - In the implementation block
@property (nonatomic,copy,readonly) NSSet * placeholders;                  //@synthesize placeholders=_placeholders - In the implementation block
+(id)updatePolicy;
+(id)addApplicationInfos:(id)arg1 ;
+(id)addPlaceholders:(id)arg1 ;
+(id)removeApplicationInfos:(id)arg1 ;
+(id)updateApplicationInfos:(id)arg1 ;
+(id)removePlaceholders:(id)arg1 ;
+(id)updateDynamicState;
+(id)updatePlaceholders:(id)arg1 ;
+(id)updateAlternateAppIcons:(id)arg1 ;
+(id)updateLocalizations:(id)arg1 ;
-(id)description;
-(long long)updateType;
-(NSSet *)placeholders;
-(NSSet *)applicationInfos;
-(id)initWithType:(long long)arg1 applicationInfos:(id)arg2 placeholders:(id)arg3 ;
@end

