/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFMutableSetDiff, HMZone, NSSet;

@interface HFZoneBuilder : HFItemBuilder {

	NSString* _name;
	HFMutableSetDiff* _roomUUIDs;

}

@property (nonatomic,retain) HFMutableSetDiff * roomUUIDs;              //@synthesize roomUUIDs=_roomUUIDs - In the implementation block
@property (nonatomic,readonly) HMZone * zone; 
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * rooms; 
+(id)na_identity;
+(Class)homeKitRepresentationClass;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(HMZone *)zone;
-(void)setName:(NSString *)arg1 ;
-(void)setZone:(HMZone *)arg1 ;
-(NSSet *)rooms;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(id)_updateName;
-(id)_updateRooms;
-(HFMutableSetDiff *)roomUUIDs;
-(void)setRoomUUIDs:(HFMutableSetDiff *)arg1 ;
-(id)_createZone;
-(void)addRoom:(id)arg1 ;
-(void)removeRoom:(id)arg1 ;
@end

