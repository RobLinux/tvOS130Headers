/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSUUID;


@protocol HMDBackingStoreRecordMapping <NSObject>
@property (nonatomic,readonly) NSString * recordName; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSUUID * parentUuid; 
@property (nonatomic,readonly) NSString * type; 
@required
-(NSString *)type;
-(NSUUID *)uuid;
-(NSString *)recordName;
-(NSUUID *)parentUuid;

@end

