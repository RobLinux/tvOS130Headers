/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSString;

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSDictionary * userDisplayStrings; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) long long errorCode; 
-(long long)errorCode;
-(NSArray *)devices;
-(NSString *)errorMessage;
-(NSDictionary *)userDisplayStrings;
-(NSString *)errorTitle;
@end

