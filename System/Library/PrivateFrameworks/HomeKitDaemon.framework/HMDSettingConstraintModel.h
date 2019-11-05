/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>
#import <HomeKitDaemon/HMDSettingConstraintModelProtocol.h>

@class NSNumber, NSString, NSData, NSUUID;

@interface HMDSettingConstraintModel : HMBModel <HMDSettingConstraintModelProtocol>

@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSData * dataValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * hmbModelID; 
@property (nonatomic,readonly) NSUUID * hmbParentModelID; 
@property (nonatomic,readonly) NSString * nameForKeyPath; 
+(id)hmbProperties;
-(id)copyWithNewParentModelID:(id)arg1 ;
-(NSString *)nameForKeyPath;
@end
