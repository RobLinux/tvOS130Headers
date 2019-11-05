/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject {

	BOOL _requiresHomeManagerUpdate;

}

@property (nonatomic,retain) NSString * ownerName; 
@property (assign,nonatomic) BOOL requiresHomeManagerUpdate;              //@synthesize requiresHomeManagerUpdate=_requiresHomeManagerUpdate - In the implementation block
+(id)properties;
-(id)dependentUUIDs;
-(BOOL)requiresHomeManagerUpdate;
-(void)setRequiresHomeManagerUpdate:(BOOL)arg1 ;
@end

