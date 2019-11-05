/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HMDSettingGroupOwnerProtocol <HMDSettingGroupProtocol>
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@required
-(NSArray *)settings;
-(NSArray *)groups;
-(void)addGroup:(id)arg1;
-(void)addSetting:(id)arg1;

@end

