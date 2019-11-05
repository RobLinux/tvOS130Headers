/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary, AKDevice;


@protocol AKAuthenticationContext <NSObject>
@property (nonatomic,copy) NSString * altDSID; 
@property (assign,nonatomic) long long serviceType; 
@property (setter=_setProxiedAppName:,nonatomic,copy) NSString * _proxiedAppName; 
@property (nonatomic,copy) NSDictionary * appProvidedData; 
@property (nonatomic,copy) NSString * appProvidedContext; 
@property (nonatomic,copy) AKDevice * proxiedDevice; 
@property (nonatomic,copy) AKDevice * companionDevice; 
@required
-(NSString *)altDSID;
-(void)setAltDSID:(id)arg1;
-(void)setServiceType:(long long)arg1;
-(long long)serviceType;
-(AKDevice *)proxiedDevice;
-(NSString *)appProvidedContext;
-(void)setAppProvidedContext:(id)arg1;
-(void)setProxiedDevice:(id)arg1;
-(void)setAppProvidedData:(id)arg1;
-(NSDictionary *)appProvidedData;
-(NSString *)_proxiedAppName;
-(AKDevice *)companionDevice;
-(void)_setProxiedAppName:(id)arg1;
-(void)setCompanionDevice:(id)arg1;

@end

