/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDEventModel.h>

@class NSString, NSNumber;

@interface HMDCharacteristicEventBaseModel : HMDEventModel

@property (nonatomic,retain) NSString * accessory; 
@property (nonatomic,retain) NSNumber * serviceID; 
@property (nonatomic,retain) NSNumber * characteristicID; 
+(id)properties;
+(id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 className:(Class)arg4 message:(id)arg5 checkForSupport:(BOOL)arg6 outCharateristic:(id*)arg7 ;
-(id)dependentUUIDs;
@end

