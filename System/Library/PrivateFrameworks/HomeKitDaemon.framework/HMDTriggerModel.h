/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSArray, NSNumber, NSDate, HMDUser, HMDDevice;

@interface HMDTriggerModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSArray * currentActionSets; 
@property (nonatomic,copy) NSNumber * active; 
@property (nonatomic,copy) NSDate * mostRecentFireDate; 
@property (nonatomic,retain) HMDUser * owner; 
@property (nonatomic,retain) HMDDevice * owningDevice; 
+(id)properties;
-(id)createPayload;
-(id)dependentUUIDs;
@end

