/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFMessage.h>

@class NSUUID, NSString, HMFMessageDestination, HMFMessageTransport, HMFActivity, NSDictionary;

@interface HMFMutableMessage : HMFMessage

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) long long qualityOfService; 
@property (nonatomic,retain) HMFMessageDestination * destination; 
@property (assign,nonatomic,__weak) HMFMessageTransport * transport; 
@property (nonatomic,retain) HMFActivity * activity; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSDictionary * messagePayload; 
@property (nonatomic,copy) id responseHandler; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setActivity:(HMFActivity *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setTransport:(HMFMessageTransport *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)setHeaderValue:(id)arg1 forKey:(id)arg2 ;
@end

